/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:50:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray, AVPlayer;


@protocol MGInspectionAttributeContainer <NSObject>
@property (readonly) NSString * inspectionTitle; 
@property (readonly) NSArray * inspectionAttributes; 
@property (readonly) NSArray * inspectionInformation; 
@property (readonly) NSString * displayName; 
@property (readonly) AVPlayer * player; 
@optional
-(AVPlayer *)player;

@required
-(NSString *)inspectionTitle;
-(NSArray *)inspectionAttributes;
-(NSArray *)inspectionInformation;
-(NSString *)displayName;

@end

