/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:04 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct type {
	unsigned char __lx[152];
} type;

typedef struct ObjectStorage<WebKit::InjectedBundleHitTestResult> {
	type data;
} ObjectStorage<WebKit::InjectedBundleHitTestResult>;

typedef struct RetainPtr<NSMutableDictionary> {
	void m_ptr;
} RetainPtr<NSMutableDictionary>;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _CFURLRequest* CFURLRequestRef;

typedef struct RefPtr<IPC::Connection> {
	Connection m_ptr;
} RefPtr<IPC::Connection>;

typedef struct ObjectStorage<WebKit::WebBackForwardListItem> {
	type data;
} ObjectStorage<WebKit::WebBackForwardListItem>;

typedef struct RetainPtr<NSURLRequest> {
	void m_ptr;
} RetainPtr<NSURLRequest>;

typedef struct RetainPtr<NSURL> {
	void m_ptr;
} RetainPtr<NSURL>;

typedef struct RetainPtr<NSArray> {
	void m_ptr;
} RetainPtr<NSArray>;

typedef struct _compressed_pair<WebKit::RemoteObjectRegistry *, std::__1::default_delete<WebKit::RemoteObjectRegistry> > {
	RemoteObjectRegistry __first_;
} compressed_pair<WebKit::RemoteObjectRegistry *, std::__1::default_delete<WebKit::RemoteObjectRegistry> >;

typedef struct unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry> > {
	compressed_pair<WebKit::RemoteObjectRegistry *, std::__1::default_delete<WebKit::RemoteObjectRegistry> > __ptr_;
} unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry> >;

typedef struct RetainPtr<NSMapTable> {
	void m_ptr;
} RetainPtr<NSMapTable>;

typedef struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >, WTF::StringHash, WTF::HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > {
	KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<WTF::String, WTF::KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >, WTF::StringHash, WTF::HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >;

typedef struct HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > > {
	HashTable<WTF::String, WTF::KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >, WTF::StringHash, WTF::HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > m_impl;
} HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >;

typedef struct WeakObjCPtr<WKWebView> {
	id m_weakReference;
} WeakObjCPtr<WKWebView>;

typedef struct RetainPtr<_WKFrameHandle> {
	void m_ptr;
} RetainPtr<_WKFrameHandle>;

typedef struct RefPtr<WTF::StringImpl> {
	StringImpl m_ptr;
} RefPtr<WTF::StringImpl>;

typedef struct String {
	RefPtr<WTF::StringImpl> m_impl;
} String;

typedef struct ObjectStorage<API::Array> {
	type data;
} ObjectStorage<API::Array>;

typedef struct ObjectStorage<API::Session> {
	type data;
} ObjectStorage<API::Session>;

typedef struct RetainPtr<NSView> {
	void m_ptr;
} RetainPtr<NSView>;

typedef struct RefPtr<WebKit::WebFrameProxy> {
	WebFrameProxy m_ptr;
} RefPtr<WebKit::WebFrameProxy>;

typedef struct Vector<WebCore::IntRect, 0, WTF::CrashOnOverflow> {
	IntRect m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WebCore::IntRect, 0, WTF::CrashOnOverflow>;

typedef struct HashTable<WebCore::IntRect, WTF::KeyValuePair<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap> > >, WTF::IntHash<WebCore::IntRect>, WTF::HashMap<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap>, WTF::IntHash<WebCore::IntRect>, WTF::HashTraits<WebCore::IntRect>, WTF::HashTraits<WTF::RefPtr<WebKit::ShareableBitmap> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntRect> > {
	KeyValuePair<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap> > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<WebCore::IntRect, WTF::KeyValuePair<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap> > >, WTF::IntHash<WebCore::IntRect>, WTF::HashMap<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap>, WTF::IntHash<WebCore::IntRect>, WTF::HashTraits<WebCore::IntRect>, WTF::HashTraits<WTF::RefPtr<WebKit::ShareableBitmap> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntRect> >;

typedef struct HashMap<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap>, WTF::IntHash<WebCore::IntRect>, WTF::HashTraits<WebCore::IntRect>, WTF::HashTraits<WTF::RefPtr<WebKit::ShareableBitmap> > > {
	HashTable<WebCore::IntRect, WTF::KeyValuePair<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap> > >, WTF::IntHash<WebCore::IntRect>, WTF::HashMap<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap>, WTF::IntHash<WebCore::IntRect>, WTF::HashTraits<WebCore::IntRect>, WTF::HashTraits<WTF::RefPtr<WebKit::ShareableBitmap> > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntRect> > m_impl;
} HashMap<WebCore::IntRect, WTF::RefPtr<WebKit::ShareableBitmap>, WTF::IntHash<WebCore::IntRect>, WTF::HashTraits<WebCore::IntRect>, WTF::HashTraits<WTF::RefPtr<WebKit::ShareableBitmap> > >;

typedef struct Vector<unsigned char, 0, WTF::CrashOnOverflow> {
	char* m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<unsigned char, 0, WTF::CrashOnOverflow>;

typedef struct RetainPtr<PDFDocument> {
	void m_ptr;
} RetainPtr<PDFDocument>;

typedef struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WebCore::IntRect>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WebCore::IntRect> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WebCore::IntRect, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebCore::IntRect> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > {
	KeyValuePair<unsigned long long, WebCore::IntRect> m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WebCore::IntRect>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WebCore::IntRect> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WebCore::IntRect, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebCore::IntRect> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> >;

typedef struct HashMap<unsigned long long, WebCore::IntRect, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebCore::IntRect> > {
	HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WebCore::IntRect>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WebCore::IntRect> >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WebCore::IntRect, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebCore::IntRect> >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > m_impl;
} HashMap<unsigned long long, WebCore::IntRect, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WebCore::IntRect> >;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct mutex {
	opaque_pthread_mutex_t __m_;
} mutex;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct condition_variable {
	opaque_pthread_cond_t __cv_;
} condition_variable;

typedef struct HashTable<SEL *, WTF::KeyValuePair<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > >, WTF::PtrHash<SEL *>, WTF::HashMap<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow>, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > >::KeyValuePairTraits, WTF::HashTraits<SEL *> > {
	KeyValuePair<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<SEL *, WTF::KeyValuePair<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > >, WTF::PtrHash<SEL *>, WTF::HashMap<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow>, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > >::KeyValuePairTraits, WTF::HashTraits<SEL *> >;

typedef struct HashMap<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow>, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > > {
	HashTable<SEL *, WTF::KeyValuePair<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > >, WTF::PtrHash<SEL *>, WTF::HashMap<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow>, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > >::KeyValuePairTraits, WTF::HashTraits<SEL *> > m_impl;
} HashMap<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow>, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow> > >;

typedef struct ObjectStorage<API::NavigationData> {
	type data;
} ObjectStorage<API::NavigationData>;

typedef struct RefPtr<WebKit::MutableDictionary> {
	MutableDictionary m_ptr;
} RefPtr<WebKit::MutableDictionary>;

typedef struct RetainPtr<_WKRemoteObjectInterface> {
	void m_ptr;
} RetainPtr<_WKRemoteObjectInterface>;

typedef struct CGContext* CGContextRef;

typedef struct RetainPtr<WKWebViewConfiguration> {
	void m_ptr;
} RetainPtr<WKWebViewConfiguration>;

typedef struct RefPtr<WebKit::WebPageProxy> {
	WebPageProxy m_ptr;
} RefPtr<WebKit::WebPageProxy>;

typedef struct _compressed_pair<WebKit::NavigationState *, std::__1::default_delete<WebKit::NavigationState> > {
	NavigationState __first_;
} compressed_pair<WebKit::NavigationState *, std::__1::default_delete<WebKit::NavigationState> >;

typedef struct unique_ptr<WebKit::NavigationState, std::__1::default_delete<WebKit::NavigationState> > {
	compressed_pair<WebKit::NavigationState *, std::__1::default_delete<WebKit::NavigationState> > __ptr_;
} unique_ptr<WebKit::NavigationState, std::__1::default_delete<WebKit::NavigationState> >;

typedef struct _compressed_pair<WebKit::UIDelegate *, std::__1::default_delete<WebKit::UIDelegate> > {
	UIDelegate __first_;
} compressed_pair<WebKit::UIDelegate *, std::__1::default_delete<WebKit::UIDelegate> >;

typedef struct unique_ptr<WebKit::UIDelegate, std::__1::default_delete<WebKit::UIDelegate> > {
	compressed_pair<WebKit::UIDelegate *, std::__1::default_delete<WebKit::UIDelegate> > __ptr_;
} unique_ptr<WebKit::UIDelegate, std::__1::default_delete<WebKit::UIDelegate> >;

typedef struct RetainPtr<_WKRemoteObjectRegistry> {
	void m_ptr;
} RetainPtr<_WKRemoteObjectRegistry>;

typedef struct WeakObjCPtr<id<_WKFormDelegate> > {
	id m_weakReference;
} WeakObjCPtr<id<_WKFormDelegate> >;

typedef struct RetainPtr<WKView> {
	void m_ptr;
} RetainPtr<WKView>;

typedef struct RetainPtr<WKFrameInfo> {
	void m_ptr;
} RetainPtr<WKFrameInfo>;

typedef struct RetainPtr<NSURLResponse> {
	void m_ptr;
} RetainPtr<NSURLResponse>;

typedef struct RetainPtr<id> {
	void m_ptr;
} RetainPtr<id>;

typedef struct RetainPtr<NSString> {
	void m_ptr;
} RetainPtr<NSString>;

typedef struct ObjectStorage<WebKit::ImmutableDictionary> {
	type data;
} ObjectStorage<WebKit::ImmutableDictionary>;

typedef struct ObjectStorage<WebKit::InjectedBundleNodeHandle> {
	type data;
} ObjectStorage<WebKit::InjectedBundleNodeHandle>;

typedef struct RefPtr<WebCore::SecurityOrigin> {
	SecurityOrigin m_ptr;
} RefPtr<WebCore::SecurityOrigin>;

typedef struct FloatPoint {
	float m_x;
	float m_y;
} FloatPoint;

typedef struct IntPoint {
	int m_x;
	int m_y;
} IntPoint;

typedef struct IntSize {
	int m_width;
	int m_height;
} IntSize;

typedef struct RetainPtr<DDActionContext> {
	void m_ptr;
} RetainPtr<DDActionContext>;

typedef struct FloatSize {
	float m_width;
	float m_height;
} FloatSize;

typedef struct RetainPtr<const __CFDictionary *> {
	void m_ptr;
} RetainPtr<const __CFDictionary *>;

typedef struct RetainPtr<NSAttributedString> {
	void m_ptr;
} RetainPtr<NSAttributedString>;

typedef struct RefPtr<WebCore::TextIndicator> {
	TextIndicator m_ptr;
} RefPtr<WebCore::TextIndicator>;

typedef struct AttributedString {
	RetainPtr<NSAttributedString> string;
} AttributedString;

typedef struct RefPtr<WebCore::Image> {
	Image m_ptr;
} RefPtr<WebCore::Image>;

typedef struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow> {
	FloatRect m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow>;

typedef struct FloatRect {
	FloatPoint m_location;
	FloatSize m_size;
} FloatRect;

typedef struct TextIndicatorData {
	FloatRect selectionRectInWindowCoordinates;
	FloatRect textBoundingRectInWindowCoordinates;
	Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow> textRectsInBoundingRectCoordinates;
	float contentImageScaleFactor;
	RefPtr<WebCore::Image> contentImageWithHighlight;
	RefPtr<WebCore::Image> contentImage;
	int presentationTransition;
} TextIndicatorData;

typedef struct DictionaryPopupInfo {
	FloatPoint origin;
	TextIndicatorData textIndicator;
	RetainPtr<const __CFDictionary *> options;
	AttributedString attributedString;
} DictionaryPopupInfo;

typedef struct RefPtr<WebKit::SharedMemory> {
	SharedMemory m_ptr;
} RefPtr<WebKit::SharedMemory>;

typedef struct IntRect {
	IntPoint m_location;
	IntSize m_size;
} IntRect;

typedef struct Data {
	String absoluteImageURL;
	String absolutePDFURL;
	String absoluteLinkURL;
	String absoluteMediaURL;
	String linkLabel;
	String linkTitle;
	BOOL isContentEditable;
	IntRect elementBoundingBox;
	BOOL isScrollbar;
	BOOL isSelected;
	BOOL isTextNode;
	BOOL isOverTextInsideFormControlElement;
	BOOL allowsCopy;
	BOOL isDownloadableMedia;
} Data;

typedef struct ActionMenuHitTestResult {
	FloatPoint hitTestLocationInViewCooordinates;
	Data hitTestResult;
	String lookupText;
	RefPtr<WebKit::SharedMemory> imageSharedMemory;
	String imageExtension;
	RetainPtr<DDActionContext> actionContext;
	FloatRect detectedDataBoundingBox;
	RefPtr<WebCore::TextIndicator> detectedDataTextIndicator;
	unsigned long long detectedDataOriginatingPageOverlay;
	DictionaryPopupInfo dictionaryPopupInfo;
	RefPtr<WebCore::TextIndicator> linkTextIndicator;
} ActionMenuHitTestResult;

typedef struct RefPtr<API::Object> {
	Object m_ptr;
} RefPtr<API::Object>;

typedef struct RetainPtr<NSSharingServicePicker> {
	void m_ptr;
} RetainPtr<NSSharingServicePicker>;

typedef struct RetainPtr<NSPopover> {
	void m_ptr;
} RetainPtr<NSPopover>;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct RetainPtr<WKPagePreviewViewController> {
	void m_ptr;
} RetainPtr<WKPagePreviewViewController>;

typedef struct RetainPtr<NSPopoverAnimationController> {
	void m_ptr;
} RetainPtr<NSPopoverAnimationController>;

typedef struct RetainPtr<NSTimer> {
	void m_ptr;
} RetainPtr<NSTimer>;

typedef struct function<void ()> {
	type __buf_;
	__base<void ()> __f_;
} function<void ()>;

typedef struct Optional<unsigned int> {
	BOOL m_isEngaged;
	/*function pointer*/void* ;
	I) m_value;
} Optional<unsigned int>;

typedef struct URL {
	String m_string;
	unsigned m_isValid : 1;
	unsigned m_protocolIsInHTTPFamily : 1;
	int m_schemeEnd;
	int m_userStart;
	int m_userEnd;
	int m_passwordEnd;
	int m_hostEnd;
	int m_portEnd;
	int m_pathAfterLastSlash;
	int m_pathEnd;
	int m_queryEnd;
	int m_fragmentEnd;
} URL;

typedef struct Vector<WebKit::BackForwardListItemState, 0, WTF::CrashOnOverflow> {
	BackForwardListItemState m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WebKit::BackForwardListItemState, 0, WTF::CrashOnOverflow>;

typedef struct BackForwardListState {
	Vector<WebKit::BackForwardListItemState, 0, WTF::CrashOnOverflow> items;
	Optional<unsigned int> currentIndex;
} BackForwardListState;

typedef struct SessionState {
	BackForwardListState backForwardListState;
	URL provisionalURL;
} SessionState;

typedef struct RefPtr<WebKit::WebUserContentControllerProxy> {
	WebUserContentControllerProxy m_ptr;
} RefPtr<WebKit::WebUserContentControllerProxy>;

typedef struct RetainPtr<NSMutableArray> {
	void m_ptr;
} RetainPtr<NSMutableArray>;

typedef struct RetainPtr<_WKProcessPoolConfiguration> {
	void m_ptr;
} RetainPtr<_WKProcessPoolConfiguration>;

typedef struct ObjectStorage<WebKit::WebContext> {
	type data;
} ObjectStorage<WebKit::WebContext>;

typedef struct WeakObjCPtr<id<_WKDownloadDelegate> > {
	id m_weakReference;
} WeakObjCPtr<id<_WKDownloadDelegate> >;

typedef struct ObjectStorage<WebKit::WebPageGroupProxy> {
	type data;
} ObjectStorage<WebKit::WebPageGroupProxy>;

typedef struct RetainPtr<NSNumber> {
	void m_ptr;
} RetainPtr<NSNumber>;

typedef struct OpaqueWKInspector* OpaqueWKInspectorRef;

typedef struct RetainPtr<NSButton> {
	void m_ptr;
} RetainPtr<NSButton>;

typedef struct RefPtr<WebKit::WebPreferences> {
	WebPreferences m_ptr;
} RefPtr<WebKit::WebPreferences>;

typedef struct RefPtr<WebKit::ShareableBitmap> {
	ShareableBitmap m_ptr;
} RefPtr<WebKit::ShareableBitmap>;

typedef struct RetainPtr<NSImage> {
	void m_ptr;
} RetainPtr<NSImage>;

typedef struct ObjectStorage<WebKit::WebFrame> {
	type data;
} ObjectStorage<WebKit::WebFrame>;

typedef struct RetainPtr<WKPreviewPopoverAnimationController> {
	void m_ptr;
} RetainPtr<WKPreviewPopoverAnimationController>;

typedef struct ObjectStorage<WebKit::InjectedBundleScriptWorld> {
	type data;
} ObjectStorage<WebKit::InjectedBundleScriptWorld>;

typedef struct ObjectStorage<WebKit::DownloadProxy> {
	type data;
} ObjectStorage<WebKit::DownloadProxy>;

typedef struct CGImage* CGImageRef;

typedef struct WeakObjCPtr<id<WKBrowsingContextHistoryDelegate> > {
	id m_weakReference;
} WeakObjCPtr<id<WKBrowsingContextHistoryDelegate> >;

typedef struct _compressed_pair<PageLoadStateObserver *, std::__1::default_delete<PageLoadStateObserver> > {
	PageLoadStateObserver __first_;
} compressed_pair<PageLoadStateObserver *, std::__1::default_delete<PageLoadStateObserver> >;

typedef struct unique_ptr<PageLoadStateObserver, std::__1::default_delete<PageLoadStateObserver> > {
	compressed_pair<PageLoadStateObserver *, std::__1::default_delete<PageLoadStateObserver> > __ptr_;
} unique_ptr<PageLoadStateObserver, std::__1::default_delete<PageLoadStateObserver> >;

typedef struct WeakObjCPtr<id<WKBrowsingContextLoadDelegate> > {
	id m_weakReference;
} WeakObjCPtr<id<WKBrowsingContextLoadDelegate> >;

typedef struct WeakObjCPtr<id<WKBrowsingContextPolicyDelegate> > {
	id m_weakReference;
} WeakObjCPtr<id<WKBrowsingContextPolicyDelegate> >;

typedef struct OpaqueWKPage* OpaqueWKPageRef;

typedef struct ObjectStorage<WebKit::WebPageGroup> {
	type data;
} ObjectStorage<WebKit::WebPageGroup>;

typedef struct OpaqueWKPageGroup* OpaqueWKPageGroupRef;

typedef struct ObjectStorage<API::FrameHandle> {
	type data;
} ObjectStorage<API::FrameHandle>;

typedef struct ObjectStorage<WebKit::WebBackForwardList> {
	type data;
} ObjectStorage<WebKit::WebBackForwardList>;

typedef struct RefPtr<WebKit::VisitedLinkProvider> {
	VisitedLinkProvider m_ptr;
} RefPtr<WebKit::VisitedLinkProvider>;

typedef struct WeakObjCPtr<id<WKConnectionDelegate> > {
	id m_weakReference;
} WeakObjCPtr<id<WKConnectionDelegate> >;

typedef struct RefPtr<WebCore::Node> {
	Node m_ptr;
} RefPtr<WebCore::Node>;

typedef struct OpaqueWKBundleNodeHandle* OpaqueWKBundleNodeHandleRef;

typedef struct RefPtr<WebCore::Range> {
	Range m_ptr;
} RefPtr<WebCore::Range>;

typedef struct OpaqueWKBundleRangeHandle* OpaqueWKBundleRangeHandleRef;

typedef struct _compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> > {
	TextIterator __first_;
} compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> >;

typedef struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> > {
	compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> > __ptr_;
} unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> >;

typedef struct Vector<unsigned short, 0, WTF::CrashOnOverflow> {
	unsigned short m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<unsigned short, 0, WTF::CrashOnOverflow>;

typedef struct __CFString* CFStringRef;

typedef struct RetainPtr<WebCoreFullScreenPlaceholderView> {
	void m_ptr;
} RetainPtr<WebCoreFullScreenPlaceholderView>;

typedef struct RetainPtr<WebWindowScaleAnimation> {
	void m_ptr;
} RetainPtr<WebWindowScaleAnimation>;

typedef struct RetainPtr<WebWindowFadeAnimation> {
	void m_ptr;
} RetainPtr<WebWindowFadeAnimation>;

typedef struct RetainPtr<NSWindow> {
	void m_ptr;
} RetainPtr<NSWindow>;

typedef struct RefPtr<WebKit::GenericCallback<> > {
	GenericCallback<> m_ptr;
} RefPtr<WebKit::GenericCallback<> >;

typedef struct RefPtr<WebKit::WebContext> {
	WebContext m_ptr;
} RefPtr<WebKit::WebContext>;

typedef struct WeakObjCPtr<id<WKProcessGroupDelegate> > {
	id m_weakReference;
} WeakObjCPtr<id<WKProcessGroupDelegate> >;

typedef struct OpaqueWKContext* OpaqueWKContextRef;

typedef struct WKRetainPtr<const void *> {
	void m_ptr;
} WKRetainPtr<const void *>;

typedef struct RetainPtr<WKProcessPool> {
	void m_ptr;
} RetainPtr<WKProcessPool>;

typedef struct LazyInitialized<WKProcessPool> {
	BOOL m_isInitialized;
	RetainPtr<WKProcessPool> m_value;
} LazyInitialized<WKProcessPool>;

typedef struct RetainPtr<WKPreferences> {
	void m_ptr;
} RetainPtr<WKPreferences>;

typedef struct LazyInitialized<WKPreferences> {
	BOOL m_isInitialized;
	RetainPtr<WKPreferences> m_value;
} LazyInitialized<WKPreferences>;

typedef struct RetainPtr<WKUserContentController> {
	void m_ptr;
} RetainPtr<WKUserContentController>;

typedef struct LazyInitialized<WKUserContentController> {
	BOOL m_isInitialized;
	RetainPtr<WKUserContentController> m_value;
} LazyInitialized<WKUserContentController>;

typedef struct RetainPtr<_WKVisitedLinkProvider> {
	void m_ptr;
} RetainPtr<_WKVisitedLinkProvider>;

typedef struct LazyInitialized<_WKVisitedLinkProvider> {
	BOOL m_isInitialized;
	RetainPtr<_WKVisitedLinkProvider> m_value;
} LazyInitialized<_WKVisitedLinkProvider>;

typedef struct RetainPtr<_WKWebsiteDataStore> {
	void m_ptr;
} RetainPtr<_WKWebsiteDataStore>;

typedef struct LazyInitialized<_WKWebsiteDataStore> {
	BOOL m_isInitialized;
	RetainPtr<_WKWebsiteDataStore> m_value;
} LazyInitialized<_WKWebsiteDataStore>;

typedef struct RetainPtr<NSTextField> {
	void m_ptr;
} RetainPtr<NSTextField>;

typedef struct RetainPtr<NSProgressIndicator> {
	void m_ptr;
} RetainPtr<NSProgressIndicator>;

typedef struct RefPtr<WebKit::WebEditCommandProxy> {
	WebEditCommandProxy m_ptr;
} RefPtr<WebKit::WebEditCommandProxy>;

typedef struct _compressed_pair<WebKit::PageClientImpl *, std::__1::default_delete<WebKit::PageClientImpl> > {
	PageClientImpl __first_;
} compressed_pair<WebKit::PageClientImpl *, std::__1::default_delete<WebKit::PageClientImpl> >;

typedef struct unique_ptr<WebKit::PageClientImpl, std::__1::default_delete<WebKit::PageClientImpl> > {
	compressed_pair<WebKit::PageClientImpl *, std::__1::default_delete<WebKit::PageClientImpl> > __ptr_;
} unique_ptr<WebKit::PageClientImpl, std::__1::default_delete<WebKit::PageClientImpl> >;

typedef struct RetainPtr<WKBrowsingContextController> {
	void m_ptr;
} RetainPtr<WKBrowsingContextController>;

typedef struct RetainPtr<NSTrackingArea> {
	void m_ptr;
} RetainPtr<NSTrackingArea>;

typedef struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > {
	KeyValuePair<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> > m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
} HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >;

typedef struct HashMap<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> > > {
	HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > m_impl;
} HashMap<WTF::String, WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<id<NSValidatedUserInterfaceItem> >, 0, WTF::CrashOnOverflow> > >;

typedef struct _compressed_pair<WebCore::TextIndicatorWindow *, std::__1::default_delete<WebCore::TextIndicatorWindow> > {
	TextIndicatorWindow __first_;
} compressed_pair<WebCore::TextIndicatorWindow *, std::__1::default_delete<WebCore::TextIndicatorWindow> >;

typedef struct unique_ptr<WebCore::TextIndicatorWindow, std::__1::default_delete<WebCore::TextIndicatorWindow> > {
	compressed_pair<WebCore::TextIndicatorWindow *, std::__1::default_delete<WebCore::TextIndicatorWindow> > __ptr_;
} unique_ptr<WebCore::TextIndicatorWindow, std::__1::default_delete<WebCore::TextIndicatorWindow> >;

typedef struct RetainPtr<NSEvent> {
	void m_ptr;
} RetainPtr<NSEvent>;

typedef struct RetainPtr<WKFullScreenWindowController> {
	void m_ptr;
} RetainPtr<WKFullScreenWindowController>;

typedef struct RetainPtr<NSColorSpace> {
	void m_ptr;
} RetainPtr<NSColorSpace>;

typedef struct _compressed_pair<WebKit::ViewGestureController *, std::__1::default_delete<WebKit::ViewGestureController> > {
	ViewGestureController __first_;
} compressed_pair<WebKit::ViewGestureController *, std::__1::default_delete<WebKit::ViewGestureController> >;

typedef struct unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController> > {
	compressed_pair<WebKit::ViewGestureController *, std::__1::default_delete<WebKit::ViewGestureController> > __ptr_;
} unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController> >;

typedef struct RetainPtr<CALayer> {
	void m_ptr;
} RetainPtr<CALayer>;

typedef struct RetainPtr<WKActionMenuController> {
	void m_ptr;
} RetainPtr<WKActionMenuController>;

typedef struct RetainPtr<WKImmediateActionController> {
	void m_ptr;
} RetainPtr<WKImmediateActionController>;

typedef struct OpaqueWKFrame* OpaqueWKFrameRef;

typedef struct OpaqueWKHitTestResult* OpaqueWKHitTestResultRef;

typedef struct ObjectStorage<API::Data> {
	type data;
} ObjectStorage<API::Data>;

typedef struct ObjectStorage<WebKit::InjectedBundle> {
	type data;
} ObjectStorage<WebKit::InjectedBundle>;

typedef struct RetainPtr<id<WKWebProcessPlugIn> > {
	void m_ptr;
} RetainPtr<id<WKWebProcessPlugIn> >;

typedef struct OpaqueWKBundle* OpaqueWKBundleRef;

typedef struct ObjectStorage<WebKit::WebPage> {
	type data;
} ObjectStorage<WebKit::WebPage>;

typedef struct WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate> > {
	id m_weakReference;
} WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate> >;

typedef struct WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate> > {
	id m_weakReference;
} WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate> >;

typedef struct OpaqueWKBundlePage* OpaqueWKBundlePageRef;

