/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HIToolbox/HIToolbox-Structs.h>
@class NSArray;

@interface CDImageData : NSObject {

	unsigned _pasteboardIndex;
	CGRect _screenFrame;
	NSArray* _imageComponents;
	/*^block*/id _imageComponentsBlock;
	unsigned _flags;

}

@property (assign) unsigned pasteboardIndex;               //@synthesize pasteboardIndex=_pasteboardIndex - In the implementation block
@property (assign) CGRect screenFrame;                     //@synthesize screenFrame=_screenFrame - In the implementation block
@property (retain) NSArray * imageComponents;              //@synthesize imageComponents=_imageComponents - In the implementation block
@property (copy) id imageComponentsBlock;                  //@synthesize imageComponentsBlock=_imageComponentsBlock - In the implementation block
@property (readonly) unsigned flags;                       //@synthesize flags=_flags - In the implementation block
-(CGRect)screenFrame;
-(void)setPasteboardIndex:(unsigned)arg1 ;
-(void)setScreenFrame:(CGRect)arg1 ;
-(id)initWithDict:(CFDictionaryRef)arg1 ;
-(CFDictionaryRef)createDictionaryRepresentationInCAContext:(id)arg1 ;
-(void)setImageComponentsBlock:(id)arg1 ;
-(/*^block*/id)imageComponentsAsBlock;
-(id)componentAtIndex:(long long)arg1 ;
-(unsigned)pasteboardIndex;
-(void)deleteSlotsForCAContext:(id)arg1 ;
-(char)recoverSlotIDsForReusedSlotProxiesFrom:(CFDictionaryRef)arg1 usingKey:(CFNumberRef)arg2 ;
-(id)imageComponentsBlock;
-(unsigned)getExistingSlotIDForCAProxyIfPresent:(id)arg1 ;
-(char)hasCalledInComponents;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSArray *)imageComponents;
-(void)setImageComponents:(NSArray *)arg1 ;
-(unsigned)flags;
@end

