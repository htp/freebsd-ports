--- components/feature_engagement/public/feature_list.h.orig	2022-04-21 18:48:31 UTC
+++ components/feature_engagement/public/feature_list.h
@@ -223,7 +223,7 @@ DEFINE_VARIATION_PARAM(kIPHDefaultSiteViewFeature, "IP
 #endif  // BUILDFLAG(IS_IOS)
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 DEFINE_VARIATION_PARAM(kIPHDesktopTabGroupsNewGroupFeature,
                        "IPH_DesktopTabGroupsNewGroup");
 DEFINE_VARIATION_PARAM(kIPHFocusModeFeature, "IPH_FocusMode");
@@ -253,7 +253,8 @@ DEFINE_VARIATION_PARAM(kIPHDesktopSharedHighlightingFe
         // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA) || \
+    BUILDFLAG(IS_BSD)
 DEFINE_VARIATION_PARAM(kIPHAutofillVirtualCardSuggestionFeature,
                        "IPH_AutofillVirtualCardSuggestion");
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) ||
@@ -358,7 +359,7 @@ constexpr flags_ui::FeatureEntry::FeatureVariation
         VARIATION_ENTRY(kIPHDiscoverFeedHeaderFeature),
         VARIATION_ENTRY(kIPHDefaultSiteViewFeature),
 #elif BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
         VARIATION_ENTRY(kIPHDesktopTabGroupsNewGroupFeature),
         VARIATION_ENTRY(kIPHFocusModeFeature),
         VARIATION_ENTRY(kIPHGlobalMediaControls),
@@ -381,7 +382,8 @@ constexpr flags_ui::FeatureEntry::FeatureVariation
         // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_FUCHSIA)
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_FUCHSIA) || \
+    BUILDFLAG(IS_BSD)
         VARIATION_ENTRY(kIPHAutofillVirtualCardSuggestionFeature),
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_APPLE) || BUILDFLAG(IS_LINUX) ||
         // BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) ||
