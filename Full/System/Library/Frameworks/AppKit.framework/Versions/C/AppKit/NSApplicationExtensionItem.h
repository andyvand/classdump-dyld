/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSSecureCoding.h>
#import <AppKit/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray, CLLocation, NSDictionary;

@interface NSApplicationExtensionItem : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _storageDictionary;

}

@property (copy) NSString * titleText; 
@property (copy) NSString * contentText; 
@property (copy) NSArray * photoAssets; 
@property (copy) NSArray * videoAssets; 
@property (copy) NSArray * attachments; 
@property (copy) NSArray * links; 
@property (copy) CLLocation * location; 
@property (copy) NSDictionary * userInfo; 
+(char)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)attachments;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)titleText;
-(NSString *)contentText;
-(NSArray *)photoAssets;
-(NSArray *)videoAssets;
-(NSArray *)links;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setContentText:(NSString *)arg1 ;
-(void)setPhotoAssets:(NSArray *)arg1 ;
-(void)setVideoAssets:(NSArray *)arg1 ;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setLinks:(NSArray *)arg1 ;
@end

