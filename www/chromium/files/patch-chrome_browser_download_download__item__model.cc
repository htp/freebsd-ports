--- chrome/browser/download/download_item_model.cc.orig	2022-04-21 18:48:31 UTC
+++ chrome/browser/download/download_item_model.cc
@@ -660,7 +660,7 @@ bool DownloadItemModel::IsCommandChecked(
              download_crx_util::IsExtensionDownload(*download_);
     case DownloadCommands::ALWAYS_OPEN_TYPE:
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
       if (download_commands->CanOpenPdfInSystemViewer()) {
         DownloadPrefs* prefs = DownloadPrefs::FromBrowserContext(profile());
         return prefs->ShouldOpenPdfInSystemReader();
@@ -700,7 +700,7 @@ void DownloadItemModel::ExecuteCommand(DownloadCommand
                                          DownloadCommands::ALWAYS_OPEN_TYPE);
       DownloadPrefs* prefs = DownloadPrefs::FromBrowserContext(profile());
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || \
-    BUILDFLAG(IS_MAC)
+    BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)
       if (download_commands->CanOpenPdfInSystemViewer()) {
         prefs->SetShouldOpenPdfInSystemReader(!is_checked);
         SetShouldPreferOpeningInBrowser(is_checked);
