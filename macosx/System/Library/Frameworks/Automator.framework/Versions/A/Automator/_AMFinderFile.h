/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMFinderItem.h>

@class NSNumber, NSString;

@interface _AMFinderFile : _AMFinderItem

@property (copy) NSNumber * fileType; 
@property (copy) NSNumber * creatorType; 
@property (assign) char stationery; 
@property (copy,readonly) NSString * productVersion; 
@property (copy,readonly) NSString * version; 
-(NSString *)productVersion;
-(NSNumber *)creatorType;
-(void)setCreatorType:(NSNumber *)arg1 ;
-(char)stationery;
-(void)setStationery:(char)arg1 ;
-(void)setFileType:(NSNumber *)arg1 ;
-(NSNumber *)fileType;
-(NSString *)version;
@end

