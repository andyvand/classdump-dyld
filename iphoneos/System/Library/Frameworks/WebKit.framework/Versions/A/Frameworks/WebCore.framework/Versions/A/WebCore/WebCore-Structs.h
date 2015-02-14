/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct type {
	unsigned char __lx[8];
} type;

typedef struct Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow> {
	RetainPtr<const __CTFontDescriptor *> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
	type m_inlineBuffer[16];
} Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow>;

typedef struct OpaqueJSContext* OpaqueJSContextRef;

typedef struct OpaqueJSValue* OpaqueJSValueRef;

typedef struct RefPtr<WebCore::TextIndicator> {
	TextIndicator m_ptr;
} RefPtr<WebCore::TextIndicator>;

typedef struct RetainPtr<NSArray> {
	void m_ptr;
} RetainPtr<NSArray>;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct RootObject* RootObjectRef;

typedef struct _NSZone* NSZoneRef;

typedef struct DOMObjectInternal* DOMObjectInternalRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_We10;

typedef struct dispatch_semaphore_s* dispatch_semaphore_sRef;

typedef struct RetainPtr<NSSpeechSynthesizer> {
	void m_ptr;
} RetainPtr<NSSpeechSynthesizer>;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct RetainPtr<id> {
	void m_ptr;
} RetainPtr<id>;

typedef struct RetainPtr<WebScrollbarPartAnimation> {
	void m_ptr;
} RetainPtr<WebScrollbarPartAnimation>;

typedef struct RefPtr<WebCore::SharedBuffer::DataBuffer> {
	DataBuffer m_ptr;
} RefPtr<WebCore::SharedBuffer::DataBuffer>;

typedef struct RefPtr<WTF::WeakReference<WebCore::SourceBufferPrivateAVFObjC> > {
	WeakReference<WebCore::SourceBufferPrivateAVFObjC> m_ptr;
} RefPtr<WTF::WeakReference<WebCore::SourceBufferPrivateAVFObjC> >;

typedef struct WeakPtr<WebCore::SourceBufferPrivateAVFObjC> {
	RefPtr<WTF::WeakReference<WebCore::SourceBufferPrivateAVFObjC> > m_ref;
} WeakPtr<WebCore::SourceBufferPrivateAVFObjC>;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0, WTF::CrashOnOverflow> {
	RetainPtr<AVSampleBufferDisplayLayer> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WTF::RetainPtr<AVSampleBufferDisplayLayer>, 0, WTF::CrashOnOverflow>;

typedef struct Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0, WTF::CrashOnOverflow> {
	RetainPtr<AVSampleBufferAudioRenderer> m_buffer;
	unsigned m_capacity;
	unsigned m_size;
} Vector<WTF::RetainPtr<AVSampleBufferAudioRenderer>, 0, WTF::CrashOnOverflow>;

typedef struct CGPath* CGPathRef;

typedef struct RetainPtr<NSView> {
	void m_ptr;
} RetainPtr<NSView>;

typedef struct RetainPtr<NSTextField> {
	void m_ptr;
} RetainPtr<NSTextField>;

typedef struct RetainPtr<NSURLRequest> {
	void m_ptr;
} RetainPtr<NSURLRequest>;

typedef struct RetainPtr<NSCachedURLResponse> {
	void m_ptr;
} RetainPtr<NSCachedURLResponse>;

typedef struct CGImage* CGImageRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct _CGLPixelFormatObject* CGLPixelFormatObjectRef;

typedef struct _CGLContextObject* CGLContextObjectRef;

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
} SCD_Struct_We31;

typedef struct CGContext* CGContextRef;

typedef struct OwnPtr<WebCore::TileController> {
	TileController m_ptr;
} OwnPtr<WebCore::TileController>;

typedef struct CGColor* CGColorRef;

typedef struct RefPtr<WebCore::HTMLMediaElement> {
	HTMLMediaElement m_ptr;
} RefPtr<WebCore::HTMLMediaElement>;

typedef struct _compressed_pair<WebCore::DisplaySleepDisabler *, std::__1::default_delete<WebCore::DisplaySleepDisabler> > {
	DisplaySleepDisabler __first_;
} compressed_pair<WebCore::DisplaySleepDisabler *, std::__1::default_delete<WebCore::DisplaySleepDisabler> >;

typedef struct unique_ptr<WebCore::DisplaySleepDisabler, std::__1::default_delete<WebCore::DisplaySleepDisabler> > {
	compressed_pair<WebCore::DisplaySleepDisabler *, std::__1::default_delete<WebCore::DisplaySleepDisabler> > __ptr_;
} unique_ptr<WebCore::DisplaySleepDisabler, std::__1::default_delete<WebCore::DisplaySleepDisabler> >;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

