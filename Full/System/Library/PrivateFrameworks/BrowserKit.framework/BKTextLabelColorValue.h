/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BrowserKit/BrowserKit-Structs.h>
#import <BrowserKit/NSCopying.h>

@class NSString;

@interface BKTextLabelColorValue : NSObject <NSCopying> {

	NSString* _text;
	long long _labelColorIndex;

}

@property (copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (assign) long long labelColorIndex;              //@synthesize labelColorIndex=_labelColorIndex - In the implementation block
-(void)setLabelColorIndex:(long long)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(long long)labelColorIndex;
@end
