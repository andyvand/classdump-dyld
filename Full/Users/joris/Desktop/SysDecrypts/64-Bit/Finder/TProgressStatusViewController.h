/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Finder/Finder-Structs.h>
#import <Finder/TViewController.h>

@class TProgressIndicator, TButton, TImageView, NSString, NSImage;

@interface TProgressStatusViewController : TViewController {

	TProgressIndicator* _progress;
	TButton* _cancelButton;
	TImageView* _imageView;
	TNSRef<TTargetActionFunctor *> _cancelBtnFunctorAdapter;
	TNSRef<NSTrackingArea *> _cancelBtnTrackingArea;
	TNotificationCenterObserver* _cancelBtnUpdateTrackingAreaObserver;
	BOOL _isCancelButtonEnabled;
	BOOL _isCancelButtonVisible;
	TString* _titleString;
	TString* _messageString;
	TString* _cancelMessageString;
	TNSRef<NSImage *> _image;
	BOOL _indeterminate;
	double _percentComplete;
	BOOL _shouldDisplayCancelString;

}

@property (nonatomic,copy) NSString * titleString; 
@property (nonatomic,copy,readonly) NSString * subString; 
@property (nonatomic,copy) NSString * messageString; 
@property (nonatomic,copy) NSString * cancelMessageString; 
@property (nonatomic,readonly) CGSize imageViewSize; 
@property (nonatomic,copy) NSImage * image; 
@property (assign,nonatomic) BOOL indeterminate;                                //@synthesize indeterminate=_indeterminate - In the implementation block
@property (assign,nonatomic) double percentComplete; 
@property (getter=isCancelButtonEnabled) BOOL cancelButtonEnabled;              //@synthesize isCancelButtonEnabled=_isCancelButtonEnabled - In the implementation block
@property (getter=isCancelButtonVisible) BOOL cancelButtonVisible;              //@synthesize isCancelButtonVisible=_isCancelButtonVisible - In the implementation block
@property (assign) BOOL shouldDisplayCancelString;                              //@synthesize shouldDisplayCancelString=_shouldDisplayCancelString - In the implementation block
+(id)keyPathsForValuesAffectingSubString;
-(CGSize)imageViewSize;
-(void)setCancelButtonEnabled:(BOOL)arg1 ;
-(void)setCancelButtonFunctor:(const function<void ()>*)arg1 validatorID:(long long)arg2 ;
-(id)initWithStatusKind:(int)arg1 ;
-(BOOL)shouldDisplayCancelString;
-(BOOL)isCancelButtonEnabled;
-(void)setShouldDisplayCancelString:(BOOL)arg1 ;
-(NSString *)subString;
-(BOOL)isCancelButtonVisible;
-(void)setCancelButtonVisible:(BOOL)arg1 ;
-(void)initCommon;
-(void)viewLoaded;
-(void)aboutToTearDown;
-(id)init;
-(NSImage *)image;
-(void)setImage:(NSImage *)arg1 ;
-(void)setIcon:(const TIconRef*)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setMessageString:(NSString *)arg1 ;
-(void)setCancelMessageString:(NSString *)arg1 ;
-(NSString *)cancelMessageString;
-(NSString *)titleString;
-(NSString *)messageString;
-(BOOL)indeterminate;
-(double)percentComplete;
-(void)setPercentComplete:(double)arg1 ;
@end
