/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BU_ButtonPart, CABackdropLayer, CALayer, BU_TBUStarfieldShadowLayer, BU_DPRemoteDesktopPicture, NSArray, BU_TValidatingDateFormatter, NSTimer, NSDate, NSDateComponents;

typedef struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> > {
	__CFString fRef;
} TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> >;

typedef struct TString {
	TRef<const __CFString *, TRetainReleasePolicy<CFStringRef> > fString;
} TString;

typedef struct CGContext* CGContextRef;

typedef struct {
	BOOL fPressed;
} SCD_Struct_BU3;

typedef struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef> > {
	CGImage fRef;
} TRef<CGImage *, TRetainReleasePolicy<CGImageRef> >;

typedef struct TFCGImage {
	TRef<CGImage *, TRetainReleasePolicy<CGImageRef> > fRef;
} TFCGImage;

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

typedef struct CGImage* CGImageRef;

typedef struct __CTFont* CTFontRef;

typedef struct CGColor* CGColorRef;

typedef struct __CFString* CFStringRef;

typedef struct CGPath* CGPathRef;

typedef struct TRef<CGColorSpace *, TRetainReleasePolicy<CGColorSpaceRef> > {
	CGColorSpace fRef;
} TRef<CGColorSpace *, TRetainReleasePolicy<CGColorSpaceRef> >;

typedef struct TRef<CGColor *, TRetainReleasePolicy<CGColorRef> > {
	CGColor fRef;
} TRef<CGColor *, TRetainReleasePolicy<CGColorRef> >;

typedef struct TNSRef<BU_ButtonPart *> {
	BU_ButtonPart* fRef;
} TNSRef<BU_ButtonPart *>;

typedef struct TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> > {
	TTimeMachineTarget fRef;
} TRef<TTimeMachineTarget *, TRetainReleasePolicy<TTimeMachineTarget *> >;

typedef struct TNSRef<CABackdropLayer *> {
	CABackdropLayer* fRef;
} TNSRef<CABackdropLayer *>;

typedef struct TNSRef<CALayer *> {
	CALayer* fRef;
} TNSRef<CALayer *>;

typedef struct _compressed_pair<CGRect *, std::__1::allocator<CGRect> > {
	CGRect __first_;
} compressed_pair<CGRect *, std::__1::allocator<CGRect> >;

typedef struct vector<CGRect, std::__1::allocator<CGRect> > {
	CGRect __begin_;
	CGRect __end_;
	compressed_pair<CGRect *, std::__1::allocator<CGRect> > __end_cap_;
} vector<CGRect, std::__1::allocator<CGRect> >;

typedef struct OpaqueEventHandlerRef* OpaqueEventHandlerRefRef;

typedef struct TNSRef<BU_TBUStarfieldShadowLayer *> {
	BU_TBUStarfieldShadowLayer* fRef;
} TNSRef<BU_TBUStarfieldShadowLayer *>;

typedef struct TNSRef<BU_DPRemoteDesktopPicture *> {
	BU_DPRemoteDesktopPicture* fRef;
} TNSRef<BU_DPRemoteDesktopPicture *>;

typedef struct TNSRef<NSArray *> {
	NSArray* fRef;
} TNSRef<NSArray *>;

typedef struct _compressed_pair<StarVertices *, std::__1::allocator<StarVertices> > {
	/*function pointer*/void* __first_;
} compressed_pair<StarVertices *, std::__1::allocator<StarVertices> >;

typedef struct vector<StarVertices, std::__1::allocator<StarVertices> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<StarVertices *, std::__1::allocator<StarVertices> > __end_cap_;
} vector<StarVertices, std::__1::allocator<StarVertices> >;

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
	float field10;
	float field11;
	float field12;
	float field13;
	float field14;
	float field15;
	float field16;
} SCD_Struct_BU28;

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
	float field10;
} SCD_Struct_BU29;

typedef struct {
	float field1;
} SCD_Struct_BU30;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
} SCD_Struct_BU31;

typedef struct _CGLPixelFormatObject* CGLPixelFormatObjectRef;

typedef struct _CGLPBufferObject* CGLPBufferObjectRef;

typedef struct _compressed_pair<char *, std::__1::allocator<char> > {
	char* __first_;
} compressed_pair<char *, std::__1::allocator<char> >;

typedef struct vector<char, std::__1::allocator<char> > {
	char* __begin_;
	char* __end_;
	compressed_pair<char *, std::__1::allocator<char> > __end_cap_;
} vector<char, std::__1::allocator<char> >;

typedef struct _xpc_connection_s* xpc_connection_sRef;

typedef struct TRef<dispatch_queue_s *, TRetainReleasePolicy<dispatch_queue_t> > {
	dispatch_queue_s fRef;
} TRef<dispatch_queue_s *, TRetainReleasePolicy<dispatch_queue_t> >;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct TNSRef<BU_TValidatingDateFormatter *> {
	BU_TValidatingDateFormatter* fRef;
} TNSRef<BU_TValidatingDateFormatter *>;

typedef struct _compressed_pair<unsigned long, std::__1::less<TString> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::less<TString> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TString, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TString, void *> > >;

typedef struct _tree<TString, std::__1::less<TString>, std::__1::allocator<TString> > {
	__tree_node<TString, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TString, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::less<TString> > __pair3_;
} tree<TString, std::__1::less<TString>, std::__1::allocator<TString> >;

typedef struct set<TString, std::__1::less<TString>, std::__1::allocator<TString> > {
	tree<TString, std::__1::less<TString>, std::__1::allocator<TString> > __tree_;
} set<TString, std::__1::less<TString>, std::__1::allocator<TString> >;

typedef struct _compressed_pair<unsigned long, std::__1::less<UDefaults::RegistryID> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::less<UDefaults::RegistryID> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<UDefaults::RegistryID, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<UDefaults::RegistryID, void *> > >;

typedef struct _tree<UDefaults::RegistryID, std::__1::less<UDefaults::RegistryID>, std::__1::allocator<UDefaults::RegistryID> > {
	__tree_node<UDefaults::RegistryID, void *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<UDefaults::RegistryID, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::less<UDefaults::RegistryID> > __pair3_;
} tree<UDefaults::RegistryID, std::__1::less<UDefaults::RegistryID>, std::__1::allocator<UDefaults::RegistryID> >;

typedef struct set<UDefaults::RegistryID, std::__1::less<UDefaults::RegistryID>, std::__1::allocator<UDefaults::RegistryID> > {
	tree<UDefaults::RegistryID, std::__1::less<UDefaults::RegistryID>, std::__1::allocator<UDefaults::RegistryID> > __tree_;
} set<UDefaults::RegistryID, std::__1::less<UDefaults::RegistryID>, std::__1::allocator<UDefaults::RegistryID> >;

typedef struct TNSRef<NSTimer *> {
	NSTimer* fRef;
} TNSRef<NSTimer *>;

typedef struct TNSRef<NSDate *> {
	NSDate* fRef;
} TNSRef<NSDate *>;

typedef struct TNSRef<NSDateComponents *> {
	NSDateComponents* fRef;
} TNSRef<NSDateComponents *>;

typedef struct __CVDisplayLink* CVDisplayLinkRef;

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
} SCD_Struct_BU53;

typedef struct _compressed_pair<TNSRef<CALayer *> *, std::__1::allocator<TNSRef<CALayer *> > > {
	TNSRef<CALayer *> __first_;
} compressed_pair<TNSRef<CALayer *> *, std::__1::allocator<TNSRef<CALayer *> > >;

typedef struct vector<TNSRef<CALayer *>, std::__1::allocator<TNSRef<CALayer *> > > {
	TNSRef<CALayer *> __begin_;
	TNSRef<CALayer *> __end_;
	compressed_pair<TNSRef<CALayer *> *, std::__1::allocator<TNSRef<CALayer *> > > __end_cap_;
} vector<TNSRef<CALayer *>, std::__1::allocator<TNSRef<CALayer *> > >;

typedef struct type {
	unsigned char __lx[24];
} type;

typedef struct function<void ()> {
	type __buf_;
	__base<void ()> __f_;
} function<void ()>;

