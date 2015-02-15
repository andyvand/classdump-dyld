/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiPhoto6Item.h>

@class NSString, NSDate, NSArray;

@interface _AMiPhoto6Photo : _AMiPhoto6Item

@property (copy) NSString * comment; 
@property (copy) NSDate * date; 
@property (copy,readonly) NSArray * dimensions; 
@property (readonly) long long height; 
@property (copy,readonly) NSString * imageFilename; 
@property (copy,readonly) NSString * imagePath; 
@property (copy) NSString * name; 
@property (copy,readonly) NSString * thumbnailFilename; 
@property (copy,readonly) NSString * thumbnailPath; 
@property (copy) NSString * title; 
@property (readonly) long long width; 
-(id)keywords;
-(NSString *)thumbnailPath;
-(long long)id;
-(NSString *)imageFilename;
-(NSString *)thumbnailFilename;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)comment;
-(void)setComment:(NSString *)arg1 ;
-(long long)width;
-(long long)height;
-(NSArray *)dimensions;
-(NSString *)imagePath;
@end

