/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WhitePages/WPResource.h>

@interface WPLocation : WPResource
+(id)defaultLargeImage;
+(id)locationWithODRecord:(id)arg1 session:(id)arg2 ;
+(id)locationWithGUID:(id)arg1 attributesToBeReturned:(id)arg2 ;
+(id)locationWithGUID:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3 ;
+(id)locationsWithName:(id)arg1 attributesToBeReturned:(id)arg2 ;
+(id)locationsWithName:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3 ;
+(id)defaultImage;
-(id)recordType;
-(id)singularRecordCategory;
-(id)pluralRecordCategory;
-(id)initRecordWithCachedAttributes:(id)arg1 session:(id)arg2 ;
-(id)printableAttributedString;
-(id)initLocationWithODRecord:(id)arg1 session:(id)arg2 ;
-(id)building;
-(id)floor;
-(id)phone;
-(void)setBuilding:(id)arg1 ;
-(void)setFloor:(id)arg1 ;
-(void)setPhone:(id)arg1 ;
-(void)setCapacity:(id)arg1 ;
-(void)dealloc;
-(void)reset;
-(unsigned)capacity;
-(id)badgeImage;
@end

