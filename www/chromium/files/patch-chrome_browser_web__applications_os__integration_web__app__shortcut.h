--- chrome/browser/web_applications/os_integration/web_app_shortcut.h.orig	2022-04-21 18:48:31 UTC
+++ chrome/browser/web_applications/os_integration/web_app_shortcut.h
@@ -19,7 +19,7 @@
 #include "ui/gfx/image/image_family.h"
 #include "url/gurl.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/web_applications/os_integration/web_app_shortcut_linux.h"
 #endif  // BUILDFLAG(IS_LINUX)
 
@@ -47,7 +47,7 @@ struct ScopedShortcutOverrideForTesting {
   base::ScopedTempDir startup;
 #elif BUILDFLAG(IS_MAC)
   base::ScopedTempDir chrome_apps_folder;
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   base::ScopedTempDir desktop;
   base::ScopedTempDir startup;
 #endif
@@ -90,7 +90,7 @@ struct ShortcutInfo {
   std::set<std::string> file_handler_extensions;
   std::set<std::string> file_handler_mime_types;
   std::set<std::string> protocol_handlers;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   std::set<DesktopActionInfo> actions;
 #endif  // BUILDFLAG(IS_LINUX)
 
