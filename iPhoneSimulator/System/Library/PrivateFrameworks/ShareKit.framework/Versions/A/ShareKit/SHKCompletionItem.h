/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ShareKit/ShareKit-Structs.h>
@class NSString, NSImage;

@interface SHKCompletionItem : NSObject {

	NSString* _value;
	NSString* _title;
	NSString* _subtitle;
	NSImage* _image;
	NSRange _range;

}

@property (retain) NSString * value;                 //@synthesize value=_value - In the implementation block
@property (retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (retain) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (retain) NSImage * image;                  //@synthesize image=_image - In the implementation block
@property (assign) NSRange range;                    //@synthesize range=_range - In the implementation block
+(id)completionWithValue:(id)arg1 title:(id)arg2 subtitle:(id)arg3 image:(id)arg4 range:(NSRange)arg5 ;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setValue:(NSString *)arg1 ;
-(NSRange)range;
-(NSString *)value;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
@end

