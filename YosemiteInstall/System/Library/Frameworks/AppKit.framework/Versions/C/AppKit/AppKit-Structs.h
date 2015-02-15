/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData;

typedef struct OpaqueATSUStyle* OpaqueATSUStyleRef;

typedef const struct __AXUIElement* AXUIElementRef;

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

typedef struct _NSZone* NSZoneRef;

typedef struct _aSettings {
	unsigned animationCurve : 8;
	unsigned animationBlockingMode : 2;
	unsigned reserved : 22;
} aSettings;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct __CFArray* CFArrayRef;

typedef struct OpaqueHIPresentationInstanceRef* OpaqueHIPresentationInstanceRefRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPath* CGPathRef;

typedef struct {
	id field1;
	SEL field2;
} SCD_Struct_NS15;

typedef struct CGImage* CGImageRef;

typedef struct __CFString* CFStringRef;

typedef struct CGContext* CGContextRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 31;
} SCD_Struct_NS19;

typedef struct {
	double field1;
	double field2;
	double field3;
	SCD_Struct_NS19 field4;
} SCD_Struct_NS20;

typedef struct OpaqueMenuRef* OpaqueMenuRefRef;

typedef struct OpaqueEventHandlerRef* OpaqueEventHandlerRefRef;

typedef struct OpaqueEventRef* OpaqueEventRefRef;

typedef struct OpaqueEventHandlerCallRef* OpaqueEventHandlerCallRefRef;

typedef struct OpaqueWindowPtr* OpaqueWindowPtrRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_NS26;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_NS27;

typedef struct NSEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} NSEdgeInsets;

typedef struct CGColor* CGColorRef;

typedef struct CGPDFArray* CGPDFArrayRef;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_NS31;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct {
	long long generationCount;
	long long changeCount;
} SCD_Struct_NS34;

typedef struct __CFSet* CFSetRef;

typedef struct dispatch_semaphore_s* dispatch_semaphore_sRef;

typedef struct OpaqueLSSharedFileListItemRef* OpaqueLSSharedFileListItemRefRef;

typedef struct OpaqueLSSharedFileListRef* OpaqueLSSharedFileListRefRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct OpaqueCoreDragHandler* OpaqueCoreDragHandlerRef;

typedef struct __CGEvent* CGEventRef;

typedef struct {
	int eventNumber;
	int clickCount;
	float pressure;
	double deltaX;
	double deltaY;
	int subtype;
	short buttonNumber;
	short reserved1;
	int reserved2[3];
} SCD_Struct_NS42;

typedef struct {
	NSString* keys;
	NSString* unmodKeys;
	unsigned short keyCode;
	char isARepeat;
	int eventFlags;
	int reserved[5];
} SCD_Struct_NS43;

typedef struct {
	int eventNumber;
	long long trackingNumber;
	void userData;
	int reserved[6];
} SCD_Struct_NS44;

typedef struct {
	double deltaX;
	double deltaY;
	double deltaZ;
	short subtype;
	short reserved1;
	int reserved2[6];
} SCD_Struct_NS45;

typedef struct {
	double deltaX;
	double deltaY;
	double deltaZ;
	int reserved[7];
} SCD_Struct_NS46;

typedef struct {
	short subtype;
	char gestureEnded;
	char reserved;
	int value;
	float percentage;
	int reserved2[7];
} SCD_Struct_NS47;

typedef struct {
	int subtype;
	long long data1;
	long long data2;
	int reserved[6];
} SCD_Struct_NS48;

typedef union {
	SCD_Struct_NS42 mouse;
	SCD_Struct_NS43 key;
	SCD_Struct_NS44 tracking;
	SCD_Struct_NS45 scrollWheel;
	SCD_Struct_NS46 axisGesture;
	SCD_Struct_NS47 miscGesture;
	SCD_Struct_NS48 misc;
	int tabletPointData[14];
	int tabletProximityData[14];
} SCD_Union_NS49;

typedef struct FSRef {
	unsigned char hidden[80];
} FSRef;

typedef struct CGSRegionObject* CGSRegionObjectRef;

typedef struct OpaqueIconRef* OpaqueIconRefRef;

typedef struct CGLayer* CGLayerRef;

typedef struct _NSMouseTrackerDelegateRespondTo {
	unsigned startTracking : 1;
	unsigned continueTracking : 1;
	unsigned stopTracking : 1;
	unsigned constrainPoint : 1;
	unsigned handlePeriodicEvents : 1;
	unsigned reserved : 27;
} NSMouseTrackerDelegateRespondTo;

typedef struct OpaqueNodeRef* OpaqueNodeRefRef;

typedef struct OpaqueNodeRequest* OpaqueNodeRequestRef;

typedef struct OpaqueEventNotifier* OpaqueEventNotifierRef;

typedef struct OpaqueNodeTask* OpaqueNodeTaskRef;

typedef struct _CGLContextObject* CGLContextObjectRef;

typedef struct _CGLPBufferObject* CGLPBufferObjectRef;

typedef struct _CGLPixelFormatObject* CGLPixelFormatObjectRef;

typedef struct dispatch_source_s* dispatch_source_sRef;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct {
	NSData* stream;
	char* currentPtr;
	char* endPtr;
} SCD_Struct_NS64;

typedef struct {
	id field1;
	char* field2;
	char* field3;
} SCD_Struct_NS65;

typedef struct {
	char* data;
	int len;
} SCD_Struct_NS66;

typedef struct __CFPasteboard* CFPasteboardRef;

typedef struct OpaquePMPrintSession* OpaquePMPrintSessionRef;

typedef struct OpaquePMPageFormat* OpaquePMPageFormatRef;

typedef struct OpaquePMPrintSettings* OpaquePMPrintSettingsRef;

typedef struct {
	id field1;
	id field2;
	SEL field3;
	void field4;
} SCD_Struct_NS71;

typedef struct OpaquePMPrinter* OpaquePMPrinterRef;

typedef struct {
	unsigned field1 : 4;
	unsigned field2 : 1;
	unsigned field3 : 24(;
	/*function pointer*/void* field4;
	= field5;
	char* field6;
	/*function pointer*/void* field7;
	_ field8;
	_ field9;
	void*) field10;
} SCD_Struct_NS73;

typedef struct __SecTask* SecTaskRef;

typedef struct __CFAttributedString* CFAttributedStringRef;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct CGStyle* CGStyleRef;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct AudioBuffer {
	unsigned mNumberChannels;
	unsigned mDataByteSize;
	void mData;
} AudioBuffer;

typedef struct OpaqueAudioFileID* OpaqueAudioFileIDRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct __RXLanguageObject* RXLanguageObjectRef;

typedef struct __RXRecognitionSystem* RXRecognitionSystemRef;

typedef struct __RXRecognizer* RXRecognizerRef;

typedef struct {
	NSEdgeInsets field1;
	NSEdgeInsets field2;
	NSEdgeInsets field3;
	id field4;
	NSEdgeInsets field5;
	id field6;
	NSEdgeInsets field7;
	NSEdgeInsets field8;
	id field9;
	id field10;
	id field11;
} SCD_Struct_NS85;

typedef struct {
	double minPossiblePosition;
	double minAllowablePosition;
	double maxAllowablePosition;
	double maxPossiblePosition;
	char canCollapseBeforeView;
	char canCollapseAfterView;
} SCD_Struct_NS86;

typedef struct {
	char field1;
	char field2;
	double field3;
} SCD_Struct_NS87;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct _NSTabViewDelegateRespondTo {
	unsigned shouldSelectTabViewItem : 1;
	unsigned willSelectTabViewItem : 1;
	unsigned didSelectTabViewItem : 1;
	unsigned didChangeNumberOfTabViewItems : 1;
	unsigned reserved : 28;
} NSTabViewDelegateRespondTo;

typedef struct {
	char field1;
	char field2;
	char field3;
	double field4;
	double field5;
	double field6;
	double field7;
	double field8;
	double field9;
	double field10;
	double field11;
	double field12;
	char field13;
	long long field14;
	char field15;
	double field16;
} SCD_Struct_NS90;

typedef struct {
	double _currentDate;
	double _birthDate;
	double _lastDate;
	SCD_Struct_NS19 _flags;
} SCD_Struct_NS91;

typedef struct {
	id field1;
	SEL field2;
	void field3;
} SCD_Struct_NS92;

typedef struct {
	id field1;
	SEL field2;
	SEL field3;
	SEL field4;
} SCD_Struct_NS93;

typedef struct _CAView* CAViewRef;

typedef struct {
	float last;
	float min;
	float max;
	float mean;
	float total;
	int count;
} SCD_Struct_NS95;

typedef struct __QLThumbnailRequest* QLThumbnailRequestRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	unsigned field1;
	int field2;
	long long field3;
	unsigned long long field4;
	double field5;
	long long field6;
	CVSMPTETime field7;
	unsigned long long field8;
	unsigned long long field9;
} SCD_Struct_NS98;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct OpaqueCUIRendererRef* OpaqueCUIRendererRefRef;

typedef struct {
	long long field1;
	id field2;
	id field3;
	CGRect field4;
	double field5;
	char field6;
	char field7;
} SCD_Struct_NS102;

typedef struct __LSASN* LSASNRef;

typedef struct __FSFileOperation* FSFileOperationRef;

typedef struct _NSKeyValueCodingControllerModeType {
	long long mode;
	unsigned long long index;
	id indexPath;
} NSKeyValueCodingControllerModeType;

typedef struct __CFURL* CFURLRef;

typedef struct OpaqueHIViewTrackingAreaRef* OpaqueHIViewTrackingAreaRefRef;

typedef struct {
	unsigned inside : 1;
	unsigned enabledDuringMouseDrag : 1;
	unsigned isCursorRect : 1;
	unsigned reserved : 29;
} SCD_Struct_NS108;

typedef struct OpaqueControlRef* OpaqueControlRefRef;

typedef struct CGShading* CGShadingRef;

typedef struct CGFunction* CGFunctionRef;

typedef struct {
	unsigned long long serial;
	unsigned long long timestamp;
	unsigned long long delta;
} SCD_Struct_NS112;

typedef struct {
	CGSize field1;
	CGSize field2;
	CGSize field3;
	unsigned long long field4;
	unsigned long long field5;
} SCD_Struct_NS113;

typedef struct NSWorkspaceNotificationCenterSubsystemContext_t {
	id token;
} NSWorkspaceNotificationCenterSubsystemContext_t;

typedef struct CGSWindowBackdrop* CGSWindowBackdropRef;

typedef struct _xpc_connection_s* xpc_connection_sRef;

typedef struct {
	long long field1;
	unsigned field2;
} SCD_Struct_NS117;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
} SCD_Struct_NS118;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_NS119;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct CALinearMaskContext* CALinearMaskContextRef;

typedef struct __TISInputSource* TISInputSourceRef;

typedef struct __QLThumbnail* QLThumbnailRef;

typedef struct __CFData* CFDataRef;
