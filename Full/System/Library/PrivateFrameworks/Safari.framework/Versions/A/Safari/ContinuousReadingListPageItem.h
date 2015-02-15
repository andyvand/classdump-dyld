/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/NSCopying.h>

@class NSObject, NSString, NSAttributedString, NSImage;

@interface ContinuousReadingListPageItem : NSObject <NSCopying>

@property (nonatomic,readonly) NSObject * representedReadingListItem; 
@property (nonatomic,readonly) NSString * urlString; 
@property (nonatomic,readonly) NSAttributedString * title; 
@property (nonatomic,readonly) NSString * itemDescription; 
@property (nonatomic,readonly) NSString * screenName; 
@property (nonatomic,readonly) NSImage * icon; 
@property (nonatomic,readonly) NSImage * secondaryIcon; 
@property (nonatomic,readonly) char hasDefaultSiteIcon; 
@property (getter=isSocial,nonatomic,readonly) char social; 
@property (getter=isRepostedByAuthenticatedUser,nonatomic,readonly) char repostedByAuthenticatedUser; 
@property (nonatomic,readonly) NSString * reposterDisplayName; 
@property (nonatomic,readonly) NSString * reposterScreenName; 
-(char)isRepostedByAuthenticatedUser;
-(NSString *)urlString;
-(NSString *)reposterDisplayName;
-(NSString *)reposterScreenName;
-(NSObject *)representedReadingListItem;
-(NSString *)itemDescription;
-(NSImage *)secondaryIcon;
-(char)hasDefaultSiteIcon;
-(char)isSocial;
-(NSString *)screenName;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)title;
-(NSImage *)icon;
@end

