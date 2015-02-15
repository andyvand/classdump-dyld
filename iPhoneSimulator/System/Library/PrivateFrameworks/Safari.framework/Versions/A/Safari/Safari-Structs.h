/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct Vector<Safari::WebsiteTrackingData *, 0, WTF::CrashOnOverflow> {
	WebsiteTrackingData m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<Safari::WebsiteTrackingData *, 0, WTF::CrashOnOverflow>;

typedef struct HashTable<Safari::CF::String, Safari::CF::String, WTF::IdentityExtractor, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> > {
	String m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<Safari::CF::String, Safari::CF::String, WTF::IdentityExtractor, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> >;

typedef struct HashSet<Safari::CF::String, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> > {
	HashTable<Safari::CF::String, Safari::CF::String, WTF::IdentityExtractor, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> > m_impl;
} HashSet<Safari::CF::String, Safari::CF::ObjectSubclassHash<Safari::CF::String>, WTF::HashTraits<Safari::CF::String> >;

typedef struct _NSZone* NSZoneRef;

typedef struct RefPtr<Safari::AddressBookEntry> {
	AddressBookEntry m_ptr;
} RefPtr<Safari::AddressBookEntry>;

typedef struct _compressed_pair<SafariShared::CoalescedAsynchronousWriter *, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > {
	CoalescedAsynchronousWriter __first_;
} compressed_pair<SafariShared::CoalescedAsynchronousWriter *, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> >;

typedef struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > {
	compressed_pair<SafariShared::CoalescedAsynchronousWriter *, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> > __ptr_;
} unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter> >;

typedef struct _compressed_pair<Safari::AutomaticTerminationDisabler *, std::__1::default_delete<Safari::AutomaticTerminationDisabler> > {
	AutomaticTerminationDisabler __first_;
} compressed_pair<Safari::AutomaticTerminationDisabler *, std::__1::default_delete<Safari::AutomaticTerminationDisabler> >;

typedef struct unique_ptr<Safari::AutomaticTerminationDisabler, std::__1::default_delete<Safari::AutomaticTerminationDisabler> > {
	compressed_pair<Safari::AutomaticTerminationDisabler *, std::__1::default_delete<Safari::AutomaticTerminationDisabler> > __ptr_;
} unique_ptr<Safari::AutomaticTerminationDisabler, std::__1::default_delete<Safari::AutomaticTerminationDisabler> >;

typedef struct _compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > {
	SuddenTerminationDisabler __first_;
} compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >;

typedef struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > {
	compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > __ptr_;
} unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> >;

typedef struct RefPtr<Safari::AuthenticationSheetRequest> {
	AuthenticationSheetRequest m_ptr;
} RefPtr<Safari::AuthenticationSheetRequest>;

typedef struct WKRetainPtr<const void *> {
	void m_ptr;
} WKRetainPtr<const void *>;

typedef struct BackForwardListItem {
	WKRetainPtr<const void *> m_webKit2Object;
} BackForwardListItem;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct RefPtr<Safari::BrowserContentViewController> {
	BrowserContentViewController m_ptr;
} RefPtr<Safari::BrowserContentViewController>;

typedef struct RefPtr<Safari::BrowserWindowController> {
	BrowserWindowController m_ptr;
} RefPtr<Safari::BrowserWindowController>;

typedef struct TabPlacementHint {
	RefPtr<Safari::BrowserWindowController> m_safariBrowserWindow;
	RefPtr<Safari::BrowserContentViewController> m_browserContentViewController;
	BOOL m_contentViewIsAncestorTab;
} TabPlacementHint;

typedef struct RetainPtr<const __CFString *> {
	void m_ptr;
} RetainPtr<const __CFString *>;

typedef struct String {
	RetainPtr<const __CFString *> m_cfObject;
} String;

typedef struct _compressed_pair<Safari::FileLocker *, std::__1::default_delete<Safari::FileLocker> > {
	FileLocker __first_;
} compressed_pair<Safari::FileLocker *, std::__1::default_delete<Safari::FileLocker> >;

typedef struct unique_ptr<Safari::FileLocker, std::__1::default_delete<Safari::FileLocker> > {
	compressed_pair<Safari::FileLocker *, std::__1::default_delete<Safari::FileLocker> > __ptr_;
} unique_ptr<Safari::FileLocker, std::__1::default_delete<Safari::FileLocker> >;

typedef struct SHA256Hash {
	unsigned char data[32];
} SHA256Hash;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _NSModalSession* NSModalSessionRef;

typedef struct Vector<BrowserWindowPersistentState *, 0, WTF::CrashOnOverflow> {
	id m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<BrowserWindowPersistentState *, 0, WTF::CrashOnOverflow>;

typedef struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<BrowserSharingOperation> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<BrowserSharingOperation> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<BrowserSharingOperation>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<BrowserSharingOperation> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > {
	KeyValuePair<unsigned long long, WTF::RetainPtr<BrowserSharingOperation> > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<BrowserSharingOperation> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<BrowserSharingOperation> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<BrowserSharingOperation>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<BrowserSharingOperation> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> >;

typedef struct HashMap<unsigned long long, WTF::RetainPtr<BrowserSharingOperation>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<BrowserSharingOperation> > > {
	HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<BrowserSharingOperation> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<BrowserSharingOperation> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<BrowserSharingOperation>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<BrowserSharingOperation> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > m_impl;
} HashMap<unsigned long long, WTF::RetainPtr<BrowserSharingOperation>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<BrowserSharingOperation> > >;

typedef struct BrowserContentViewController* BrowserContentViewControllerRef;

typedef struct Vector<unsigned int, 0, WTF::CrashOnOverflow> {
	unsigned m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<unsigned int, 0, WTF::CrashOnOverflow>;

typedef struct Vector<BackForwardItemPersistentState *, 0, WTF::CrashOnOverflow> {
	id m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<BackForwardItemPersistentState *, 0, WTF::CrashOnOverflow>;

typedef struct RefPtr<Safari::BrowserTab> {
	BrowserTab m_ptr;
} RefPtr<Safari::BrowserTab>;

typedef struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WebNotification> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WebNotification> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WebNotification>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WebNotification> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > {
	KeyValuePair<unsigned long long, WTF::RetainPtr<WebNotification> > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WebNotification> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WebNotification> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WebNotification>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WebNotification> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> >;

typedef struct HashMap<unsigned long long, WTF::RetainPtr<WebNotification>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WebNotification> > > {
	HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WebNotification> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WebNotification> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WebNotification>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WebNotification> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > m_impl;
} HashMap<unsigned long long, WTF::RetainPtr<WebNotification>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WebNotification> > >;

typedef struct RefPtr<Safari::UnifiedFieldCompletionController> {
	UnifiedFieldCompletionController m_ptr;
} RefPtr<Safari::UnifiedFieldCompletionController>;

typedef struct _compressed_pair<Safari::ObjCNotifier *, std::__1::default_delete<Safari::ObjCNotifier> > {
	ObjCNotifier __first_;
} compressed_pair<Safari::ObjCNotifier *, std::__1::default_delete<Safari::ObjCNotifier> >;

typedef struct unique_ptr<Safari::ObjCNotifier, std::__1::default_delete<Safari::ObjCNotifier> > {
	compressed_pair<Safari::ObjCNotifier *, std::__1::default_delete<Safari::ObjCNotifier> > __ptr_;
} unique_ptr<Safari::ObjCNotifier, std::__1::default_delete<Safari::ObjCNotifier> >;

typedef struct Vector<WTF::RefPtr<Safari::ExtensionBar>, 0, WTF::CrashOnOverflow> {
	RefPtr<Safari::ExtensionBar> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WTF::RefPtr<Safari::ExtensionBar>, 0, WTF::CrashOnOverflow>;

typedef struct Array {
	WKRetainPtr<const void *> m_webKit2Object;
} Array;

typedef struct RetainPtr<CGImage *> {
	void m_ptr;
} RetainPtr<CGImage *>;

typedef struct SidebarAnimationContext {
	RetainPtr<CGImage *> snapshot;
	CGRect initialSnapshotFrame;
	CGRect destinationSnapshotFrame;
	int revealingOrCoveringSidebar;
	char sidebarAnimationInProgress;
} SidebarAnimationContext;

typedef struct Vector<BrowserTabPersistentState *, 0, WTF::CrashOnOverflow> {
	id m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<BrowserTabPersistentState *, 0, WTF::CrashOnOverflow>;

typedef const struct RenderObject* RenderObjectRef;

typedef const struct RenderLayer* RenderLayerRef;

typedef const struct Session* SessionRef;

typedef struct Page {
	WKRetainPtr<const void *> m_webKit2Object;
} Page;

typedef struct OpaqueFormAutoFillFrame* OpaqueFormAutoFillFrameRef;

typedef struct OpaqueJSContext* OpaqueJSContextRef;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct BundleFrame {
	WKRetainPtr<const void *> m_webKit2Object;
} BundleFrame;

typedef struct BundleNodeHandle {
	WKRetainPtr<const void *> m_webKit2Object;
} BundleNodeHandle;

typedef struct Dictionary {
	WKRetainPtr<const void *> m_webKit2Object;
} Dictionary;

typedef struct RefPtr<Safari::Certificate> {
	Certificate m_ptr;
} RefPtr<Safari::Certificate>;

typedef struct OpaqueSecPolicyRef* OpaqueSecPolicyRefRef;

typedef struct OpaqueSecCertificateRef* OpaqueSecCertificateRefRef;

typedef struct Vector<WTF::RefPtr<Safari::TopSite>, 0, WTF::CrashOnOverflow> {
	RefPtr<Safari::TopSite> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WTF::RefPtr<Safari::TopSite>, 0, WTF::CrashOnOverflow>;

typedef struct CGContext* CGContextRef;

typedef struct RefPtr<Safari::CoreAnimationLayer> {
	CoreAnimationLayer m_ptr;
} RefPtr<Safari::CoreAnimationLayer>;

typedef struct SearchableWebContentViewController* SearchableWebContentViewControllerRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct _BOMCopier* BOMCopierRef;

typedef struct HashTable<Safari::WK::Download, WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry> > >, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashMap<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<DownloadProgressEntry> > >::KeyValuePairTraits, WTF::HashTraits<Safari::WK::Download> > {
	KeyValuePair<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry> > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<Safari::WK::Download, WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry> > >, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashMap<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<DownloadProgressEntry> > >::KeyValuePairTraits, WTF::HashTraits<Safari::WK::Download> >;

typedef struct HashMap<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<DownloadProgressEntry> > > {
	HashTable<Safari::WK::Download, WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry> > >, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashMap<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<DownloadProgressEntry> > >::KeyValuePairTraits, WTF::HashTraits<Safari::WK::Download> > m_impl;
} HashMap<Safari::WK::Download, WTF::RetainPtr<DownloadProgressEntry>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<DownloadProgressEntry> > >;

typedef struct HashTable<Safari::WK::Download, WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<PassFileDownload> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<PassFileDownload> > >, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashMap<Safari::WK::Download, WTF::RetainPtr<PassFileDownload>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<PassFileDownload> > >::KeyValuePairTraits, WTF::HashTraits<Safari::WK::Download> > {
	KeyValuePair<Safari::WK::Download, WTF::RetainPtr<PassFileDownload> > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<Safari::WK::Download, WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<PassFileDownload> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<PassFileDownload> > >, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashMap<Safari::WK::Download, WTF::RetainPtr<PassFileDownload>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<PassFileDownload> > >::KeyValuePairTraits, WTF::HashTraits<Safari::WK::Download> >;

typedef struct HashMap<Safari::WK::Download, WTF::RetainPtr<PassFileDownload>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<PassFileDownload> > > {
	HashTable<Safari::WK::Download, WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<PassFileDownload> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::WK::Download, WTF::RetainPtr<PassFileDownload> > >, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashMap<Safari::WK::Download, WTF::RetainPtr<PassFileDownload>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<PassFileDownload> > >::KeyValuePairTraits, WTF::HashTraits<Safari::WK::Download> > m_impl;
} HashMap<Safari::WK::Download, WTF::RetainPtr<PassFileDownload>, Safari::WK::ObjectSubclassHash<Safari::WK::Download>, WTF::HashTraits<Safari::WK::Download>, WTF::HashTraits<WTF::RetainPtr<PassFileDownload> > >;

typedef struct Download {
	WKRetainPtr<const void *> m_webKit2Object;
} Download;

typedef struct RefPtr<Safari::ExtensionContextMenuItem> {
	ExtensionContextMenuItem m_ptr;
} RefPtr<Safari::ExtensionContextMenuItem>;

typedef struct RefPtr<Safari::ExtensionMenuItem> {
	ExtensionMenuItem m_ptr;
} RefPtr<Safari::ExtensionMenuItem>;

typedef struct _compressed_pair<Safari::ExtensionsPreferencesView *, std::__1::default_delete<Safari::ExtensionsPreferencesView> > {
	ExtensionsPreferencesView __first_;
} compressed_pair<Safari::ExtensionsPreferencesView *, std::__1::default_delete<Safari::ExtensionsPreferencesView> >;

typedef struct unique_ptr<Safari::ExtensionsPreferencesView, std::__1::default_delete<Safari::ExtensionsPreferencesView> > {
	compressed_pair<Safari::ExtensionsPreferencesView *, std::__1::default_delete<Safari::ExtensionsPreferencesView> > __ptr_;
} unique_ptr<Safari::ExtensionsPreferencesView, std::__1::default_delete<Safari::ExtensionsPreferencesView> >;

typedef struct _compressed_pair<Safari::ExtensionsPreferencesViewController *, std::__1::default_delete<Safari::ExtensionsPreferencesViewController> > {
	ExtensionsPreferencesViewController __first_;
} compressed_pair<Safari::ExtensionsPreferencesViewController *, std::__1::default_delete<Safari::ExtensionsPreferencesViewController> >;

typedef struct unique_ptr<Safari::ExtensionsPreferencesViewController, std::__1::default_delete<Safari::ExtensionsPreferencesViewController> > {
	compressed_pair<Safari::ExtensionsPreferencesViewController *, std::__1::default_delete<Safari::ExtensionsPreferencesViewController> > __ptr_;
} unique_ptr<Safari::ExtensionsPreferencesViewController, std::__1::default_delete<Safari::ExtensionsPreferencesViewController> >;

typedef struct RefPtr<Safari::ExtensionToolbarItem> {
	ExtensionToolbarItem m_ptr;
} RefPtr<Safari::ExtensionToolbarItem>;

typedef struct BundleScriptWorld {
	WKRetainPtr<const void *> m_webKit2Object;
} BundleScriptWorld;

typedef struct Vector<double, 0, WTF::CrashOnOverflow> {
	double m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<double, 0, WTF::CrashOnOverflow>;

typedef struct Vector<float, 0, WTF::CrashOnOverflow> {
	float m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<float, 0, WTF::CrashOnOverflow>;

typedef struct NSEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} NSEdgeInsets;

typedef struct __SKIndex* SKIndexRef;

typedef struct CGImage* CGImageRef;

typedef struct HashTable<Safari::BrowserContentViewController *, WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL> > >, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSURL> > >::KeyValuePairTraits, WTF::HashTraits<Safari::BrowserContentViewController *> > {
	KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL> > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<Safari::BrowserContentViewController *, WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL> > >, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSURL> > >::KeyValuePairTraits, WTF::HashTraits<Safari::BrowserContentViewController *> >;

typedef struct HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSURL> > > {
	HashTable<Safari::BrowserContentViewController *, WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL> > >, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSURL> > >::KeyValuePairTraits, WTF::HashTraits<Safari::BrowserContentViewController *> > m_impl;
} HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSURL> > >;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct Image {
	WKRetainPtr<const void *> m_webKit2Object;
} Image;

typedef const struct URLResponse* URLResponseRef;

typedef struct Context {
	WKRetainPtr<const void *> m_webKit2Object;
} Context;

typedef struct _compressed_pair<Safari::TrackingDataControllerClientObjCAdapter *, std::__1::default_delete<Safari::TrackingDataControllerClientObjCAdapter> > {
	TrackingDataControllerClientObjCAdapter __first_;
} compressed_pair<Safari::TrackingDataControllerClientObjCAdapter *, std::__1::default_delete<Safari::TrackingDataControllerClientObjCAdapter> >;

typedef struct unique_ptr<Safari::TrackingDataControllerClientObjCAdapter, std::__1::default_delete<Safari::TrackingDataControllerClientObjCAdapter> > {
	compressed_pair<Safari::TrackingDataControllerClientObjCAdapter *, std::__1::default_delete<Safari::TrackingDataControllerClientObjCAdapter> > __ptr_;
} unique_ptr<Safari::TrackingDataControllerClientObjCAdapter, std::__1::default_delete<Safari::TrackingDataControllerClientObjCAdapter> >;

typedef struct Vector<WTF::RefPtr<Safari::WebsiteTrackingData>, 0, WTF::CrashOnOverflow> {
	RefPtr<Safari::WebsiteTrackingData> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WTF::RefPtr<Safari::WebsiteTrackingData>, 0, WTF::CrashOnOverflow>;

typedef struct _compressed_pair<Safari::ReadingListFetcher *, std::__1::default_delete<Safari::ReadingListFetcher> > {
	ReadingListFetcher __first_;
} compressed_pair<Safari::ReadingListFetcher *, std::__1::default_delete<Safari::ReadingListFetcher> >;

typedef struct unique_ptr<Safari::ReadingListFetcher, std::__1::default_delete<Safari::ReadingListFetcher> > {
	compressed_pair<Safari::ReadingListFetcher *, std::__1::default_delete<Safari::ReadingListFetcher> > __ptr_;
} unique_ptr<Safari::ReadingListFetcher, std::__1::default_delete<Safari::ReadingListFetcher> >;

typedef struct RefPtr<Safari::Bookmark> {
	Bookmark m_ptr;
} RefPtr<Safari::Bookmark>;

typedef struct HashTable<Safari::BrowserContentViewController *, WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString> > >, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSString> > >::KeyValuePairTraits, WTF::HashTraits<Safari::BrowserContentViewController *> > {
	KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString> > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<Safari::BrowserContentViewController *, WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString> > >, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSString> > >::KeyValuePairTraits, WTF::HashTraits<Safari::BrowserContentViewController *> >;

typedef struct HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSString> > > {
	HashTable<Safari::BrowserContentViewController *, WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString> > >, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSString> > >::KeyValuePairTraits, WTF::HashTraits<Safari::BrowserContentViewController *> > m_impl;
} HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSString>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSString> > >;

typedef struct RefPtr<Safari::SearchableWebContentViewController> {
	SearchableWebContentViewController m_ptr;
} RefPtr<Safari::SearchableWebContentViewController>;

typedef struct RefPtr<SafeBrowsingLastUpdateObserver> {
	SafeBrowsingLastUpdateObserver m_ptr;
} RefPtr<SafeBrowsingLastUpdateObserver>;

typedef struct RefPtr<Safari::SiteMetadataFetcher> {
	SiteMetadataFetcher m_ptr;
} RefPtr<Safari::SiteMetadataFetcher>;

typedef struct _compressed_pair<SnippetEditorDelegate *, std::__1::default_delete<SnippetEditorDelegate> > {
	SnippetEditorDelegate __first_;
} compressed_pair<SnippetEditorDelegate *, std::__1::default_delete<SnippetEditorDelegate> >;

typedef struct unique_ptr<SnippetEditorDelegate, std::__1::default_delete<SnippetEditorDelegate> > {
	compressed_pair<SnippetEditorDelegate *, std::__1::default_delete<SnippetEditorDelegate> > __ptr_;
} unique_ptr<SnippetEditorDelegate, std::__1::default_delete<SnippetEditorDelegate> >;

typedef struct __CVDisplayLink* CVDisplayLinkRef;

typedef struct __CFFileDescriptor* CFFileDescriptorRef;

typedef struct CGColor* CGColorRef;

typedef struct Vector<WTF::RefPtr<Safari::Bookmark>, 0, WTF::CrashOnOverflow> {
	RefPtr<Safari::Bookmark> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WTF::RefPtr<Safari::Bookmark>, 0, WTF::CrashOnOverflow>;

typedef struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> {
	BookmarkAndHistoryCompletionMatch m_ptr;
} RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch>;

typedef struct duration<long long, std::__1::ratio<1, 1000000000> > {
	long long __rep_;
} duration<long long, std::__1::ratio<1, 1000000000> >;

typedef struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > {
	duration<long long, std::__1::ratio<1, 1000000000> > __d_;
} time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >;

typedef struct duration<long long, std::__1::ratio<1, 1000> > {
	long long __rep_;
} duration<long long, std::__1::ratio<1, 1000> >;

typedef struct OpaqueJSScript* OpaqueJSScriptRef;

typedef struct __WBSFieldLabelPatternMatcherArray* WBSFieldLabelPatternMatcherArrayRef;

typedef struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> > >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata> > >::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *> > {
	KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> > >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata> > >::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *> >;

typedef struct HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata> > > {
	HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata> > >, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata> > >::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *> > m_impl;
} HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata> > >;

typedef struct Vector<int, 0, WTF::CrashOnOverflow> {
	int m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<int, 0, WTF::CrashOnOverflow>;

typedef struct FPSAPContextOpaque_* FPSAPContextOpaque_Ref;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct _compressed_pair<SafariShared::URLCompletionDatabase *, std::__1::default_delete<SafariShared::URLCompletionDatabase> > {
	URLCompletionDatabase __first_;
} compressed_pair<SafariShared::URLCompletionDatabase *, std::__1::default_delete<SafariShared::URLCompletionDatabase> >;

typedef struct unique_ptr<SafariShared::URLCompletionDatabase, std::__1::default_delete<SafariShared::URLCompletionDatabase> > {
	compressed_pair<SafariShared::URLCompletionDatabase *, std::__1::default_delete<SafariShared::URLCompletionDatabase> > __ptr_;
} unique_ptr<SafariShared::URLCompletionDatabase, std::__1::default_delete<SafariShared::URLCompletionDatabase> >;

typedef struct {
	unsigned short field1[27];
} SCD_Struct_WB118;

typedef struct {
	unsigned short field1;
	unsigned short field2;
} SCD_Struct_WB119;

typedef struct {
	SCD_Struct_WB119 field1[32];
	unsigned long long field2;
} SCD_Struct_WB120;

