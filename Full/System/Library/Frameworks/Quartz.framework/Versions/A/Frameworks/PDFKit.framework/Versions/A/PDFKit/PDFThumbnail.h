/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSImage, NSLock;

@interface PDFThumbnail : NSObject {

	NSImage* _image;
	long long _priority;
	char _dirty;
	NSLock* _dirtyLock;
	char _rendering;
	NSLock* _renderingLock;

}
-(void)dealloc;
-(id)image;
-(void)setImage:(id)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(long long)priority;
-(char)dirty;
-(void)setDirty:(char)arg1 ;
-(void)setRendering:(char)arg1 ;
-(char)rendering;
@end

