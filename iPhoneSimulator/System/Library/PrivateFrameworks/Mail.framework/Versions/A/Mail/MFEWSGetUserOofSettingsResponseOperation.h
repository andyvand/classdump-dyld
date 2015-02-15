/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFEWSResponseOperation.h>

@class EWSUserOofSettingsType;

@interface MFEWSGetUserOofSettingsResponseOperation : MFEWSResponseOperation {

	EWSUserOofSettingsType* _oofSettings;
	long long _allowExternalOof;

}

@property (retain) EWSUserOofSettingsType * oofSettings;              //@synthesize oofSettings=_oofSettings - In the implementation block
@property (assign) long long allowExternalOof;                        //@synthesize allowExternalOof=_allowExternalOof - In the implementation block
-(void)executeOperation;
-(EWSUserOofSettingsType *)oofSettings;
-(void)setOofSettings:(EWSUserOofSettingsType *)arg1 ;
-(void)setAllowExternalOof:(long long)arg1 ;
-(long long)allowExternalOof;
@end

