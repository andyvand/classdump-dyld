/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/Versions/A/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FTUserConfiguration : NSObject

@property (assign,nonatomic) char cellularFaceTimeEnabled; 
@property (assign,nonatomic) char allowAnyNetwork; 
@property (nonatomic,readonly) char _nonWifiFaceTimeEntitled; 
+(id)sharedInstance;
-(char)allowAnyNetwork;
-(char)cellularFaceTimeEnabled;
-(char)_nonWifiFaceTimeEntitled;
-(char)_adequateInternalOrCarrierInstall;
-(void)setCellularFaceTimeEnabled:(char)arg1 ;
-(void)setAllowAnyNetwork:(char)arg1 ;
@end

