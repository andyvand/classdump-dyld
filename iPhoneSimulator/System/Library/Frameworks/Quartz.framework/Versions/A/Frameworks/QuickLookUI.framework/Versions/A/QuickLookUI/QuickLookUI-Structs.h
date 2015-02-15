/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct CGImage* CGImageRef;

typedef struct __CFDictionary* CFDictionaryRef;

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

typedef struct __CFMachPort* CFMachPortRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct CGContext* CGContextRef;

typedef struct __QLThumbnail* QLThumbnailRef;

typedef struct NSEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} NSEdgeInsets;

typedef struct __QLPreview* QLPreviewRef;

typedef struct dispatch_source_s* dispatch_source_sRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct __QLThumbnailRequest* QLThumbnailRequestRef;

typedef struct __CFData* CFDataRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFURL* CFURLRef;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct CGColor* CGColorRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct _NSZone* NSZoneRef;

typedef struct LSApplicationParameters_V1 {
	long long version;
	unsigned flags;
	FSRef application;
	void asyncLaunchRefCon;
	__CFDictionary environment;
	__CFArray argv;
	AEDesc initialEvent;
	__CFArray architectures;
	__CFURL applicationURL;
	ProcessSerialNumber applicationPSN;
} LSApplicationParameters_V1;

typedef struct __QLPreviewBubble* QLPreviewBubbleRef;

typedef struct __QLSeamlessOpeningRequest* QLSeamlessOpeningRequestRef;

typedef struct CGPath* CGPathRef;

