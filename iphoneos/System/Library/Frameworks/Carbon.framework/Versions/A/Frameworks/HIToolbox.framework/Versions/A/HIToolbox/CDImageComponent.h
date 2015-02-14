/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Carbon.framework/Versions/A/Frameworks/HIToolbox.framework/Versions/A/HIToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HIToolbox/HIToolbox-Structs.h>
@class NSString;

@interface CDImageComponent : NSObject {

	id _image;
	CGRect _frame;
	NSString* _key;
	unsigned _slotID;
	unsigned _flags;

}

@property (readonly) id image;                    //@synthesize image=_image - In the implementation block
@property (readonly) id contents; 
@property (assign) CGRect frame;                  //@synthesize frame=_frame - In the implementation block
@property (retain) NSString * key;                //@synthesize key=_key - In the implementation block
@property (assign) unsigned slotID;               //@synthesize slotID=_slotID - In the implementation block
@property (readonly) unsigned flags;              //@synthesize flags=_flags - In the implementation block
+(id)imageComponentWithImage:(id)arg1 frame:(CGRect)arg2 key:(id)arg3 ;
-(void)setSlotID:(unsigned)arg1 ;
-(unsigned)slotID;
-(id)initWithImage:(id)arg1 frame:(CGRect)arg2 key:(id)arg3 ;
-(void)deleteSlotForCAContext:(id)arg1 ;
-(id)dictionaryRepresentationInCAContext:(id)arg1 ;
-(char)hasCASlotProxy;
-(void)finalize;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)contents;
-(id)description;
-(CGRect)frame;
-(id)image;
-(NSString *)key;
-(id)initWithDictionary:(CFDictionaryRef)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(unsigned)flags;
@end

