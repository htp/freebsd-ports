--- components/password_manager/core/common/password_manager_features.cc.orig	2022-04-21 18:48:31 UTC
+++ components/password_manager/core/common/password_manager_features.cc
@@ -65,7 +65,7 @@ const base::Feature kFillingAcrossAffiliatedWebsites{
 const base::Feature kFillOnAccountSelect = {"fill-on-account-select",
                                             base::FEATURE_DISABLED_BY_DEFAULT};
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // When enabled, initial sync will be forced during startup if the password
 // store has encryption service failures.
 const base::Feature kForceInitialSyncWhenDecryptionFails = {
@@ -151,7 +151,7 @@ const base::Feature kReparseServerPredictionsFollowing
 const base::Feature kSecondaryServerFieldPredictions = {
     "SecondaryServerFieldPredictions", base::FEATURE_ENABLED_BY_DEFAULT};
 
-#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // Displays at least the decryptable and never saved logins in the password
 // manager
 const base::Feature kSkipUndecryptablePasswords = {
@@ -163,7 +163,7 @@ const base::Feature kSkipUndecryptablePasswords = {
 const base::Feature kSupportForAddPasswordsInSettings = {
     "SupportForAddPasswordsInSettings", base::FEATURE_DISABLED_BY_DEFAULT};
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 // When enabled, all undecryptable passwords are deleted from the local database
 // during initial sync flow.
 const base::Feature kSyncUndecryptablePasswordsLinux = {
