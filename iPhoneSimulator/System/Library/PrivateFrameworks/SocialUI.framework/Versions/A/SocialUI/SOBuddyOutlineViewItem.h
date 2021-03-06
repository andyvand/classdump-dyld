/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:18 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSArray;

@interface SOBuddyOutlineViewItem : NSObject {

	NSMutableArray* _handles;
	NSString* _displayID;
	NSString* _personUniqueID;

}

@property (nonatomic,retain) NSString * displayID;                   //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,retain) NSString * personUniqueID;              //@synthesize personUniqueID=_personUniqueID - In the implementation block
@property (nonatomic,readonly) NSArray * handles;                    //@synthesize handles=_handles - In the implementation block
-(void)removeHandle:(id)arg1 ;
-(void)setDisplayID:(NSString *)arg1 ;
-(NSString *)displayID;
-(NSString *)personUniqueID;
-(NSArray *)handles;
-(void)setPersonUniqueID:(NSString *)arg1 ;
-(void)addHandle:(id)arg1 ;
-(id)init;
@end

