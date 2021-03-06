/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Backup/Backup-Structs.h>
#import <Backup/BU_TViewController.h>

@class BU_TBackupView, BU_Button;

@interface BU_ButtonController : BU_TViewController {

	BU_TBackupView* _backupView;
	BU_Button* _cancelButton;
	BU_Button* _restoreButton;
	BU_Button* _previousButton;
	BU_Button* _nextButton;

}

@property (assign,nonatomic) BU_Button * cancelButton;                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) BU_Button * restoreButton;               //@synthesize restoreButton=_restoreButton - In the implementation block
@property (assign,nonatomic) BU_Button * previousButton;              //@synthesize previousButton=_previousButton - In the implementation block
@property (assign,nonatomic) BU_Button * nextButton;                  //@synthesize nextButton=_nextButton - In the implementation block
-(void)setNextButton:(BU_Button *)arg1 ;
-(BU_Button *)nextButton;
-(void)setCancelButton:(BU_Button *)arg1 ;
-(void)loadView;
-(id)nibName;
-(BU_Button *)cancelButton;
-(id)initWithFrame:(CGRect)arg1 andBackupView:(id)arg2 ;
-(BU_Button *)restoreButton;
-(void)setRestoreButton:(BU_Button *)arg1 ;
-(BU_Button *)previousButton;
-(void)setPreviousButton:(BU_Button *)arg1 ;
@end

