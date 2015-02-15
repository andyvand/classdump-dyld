/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMSystemEventsItem.h>

@class NSDate, NSString;

@interface _AMSystemEventsDiskItem : _AMSystemEventsItem

@property (readonly) char busyStatus; 
@property (copy,readonly) _AMSystemEventsDiskItem * container; 
@property (copy,readonly) NSDate * creationDate; 
@property (copy,readonly) NSString * displayedName; 
@property (copy) NSDate * modificationDate; 
@property (copy) NSString * name; 
@property (copy,readonly) NSString * nameExtension; 
@property (readonly) char packageFolder; 
@property (copy,readonly) NSString * path; 
@property (readonly) long long physicalSize; 
@property (copy,readonly) NSString * POSIXPath; 
@property (readonly) long long size; 
@property (copy,readonly) NSString * URL; 
@property (assign) char visible; 
@property (copy,readonly) NSString * volume; 
-(void)delete;
-(void)moveTo:(id)arg1 ;
-(id)id;
-(NSString *)nameExtension;
-(char)packageFolder;
-(NSString *)POSIXPath;
-(char)busyStatus;
-(char)visible;
-(NSString *)path;
-(void)setName:(NSString *)arg1 ;
-(NSString *)URL;
-(NSString *)name;
-(long long)size;
-(void)setVisible:(char)arg1 ;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(long long)physicalSize;
-(NSString *)volume;
-(_AMSystemEventsDiskItem *)container;
-(NSString *)displayedName;
-(void)setModificationDate:(NSDate *)arg1 ;
@end

