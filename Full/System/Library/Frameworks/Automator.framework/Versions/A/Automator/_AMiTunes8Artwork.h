/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiTunes8Item.h>

@class NSImage, NSString, NSNumber, NSData;

@interface _AMiTunes8Artwork : _AMiTunes8Item

@property (copy) NSImage * data; 
@property (copy) NSString * objectDescription; 
@property (readonly) char downloaded; 
@property (copy,readonly) NSNumber * format; 
@property (assign) long long kind; 
@property (copy) NSData * rawData; 
-(char)downloaded;
-(NSString *)objectDescription;
-(void)setObjectDescription:(NSString *)arg1 ;
-(NSData *)rawData;
-(void)setRawData:(NSData *)arg1 ;
-(NSImage *)data;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(void)setData:(NSImage *)arg1 ;
-(NSNumber *)format;
@end

