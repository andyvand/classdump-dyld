/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class NSStackView, NSView, NSTextField, NSLayoutConstraint, SOAVPopUpButtonViewController, NSArray;

@interface SOParticipantTableCellView : NSTableCellView {

	NSStackView* _horizontalLayoutStackView;
	NSView* _labelContainer;
	NSTextField* _locationLabel;
	NSLayoutConstraint* _participantNameLabelBottomConstraint;
	SOAVPopUpButtonViewController* _audioPopUpButtonViewController;
	SOAVPopUpButtonViewController* _videoPopUpButtonViewController;
	SOAVPopUpButtonViewController* _screenSharingPopUpButtonViewController;
	NSArray* _stackedLabelsConstraints;

}

@property (retain) NSStackView * horizontalLayoutStackView;                                             //@synthesize horizontalLayoutStackView=_horizontalLayoutStackView - In the implementation block
@property (retain) NSView * labelContainer;                                                             //@synthesize labelContainer=_labelContainer - In the implementation block
@property (retain) NSTextField * locationLabel;                                                         //@synthesize locationLabel=_locationLabel - In the implementation block
@property (retain) NSLayoutConstraint * participantNameLabelBottomConstraint;                           //@synthesize participantNameLabelBottomConstraint=_participantNameLabelBottomConstraint - In the implementation block
@property (retain) SOAVPopUpButtonViewController * audioPopUpButtonViewController;                      //@synthesize audioPopUpButtonViewController=_audioPopUpButtonViewController - In the implementation block
@property (retain) SOAVPopUpButtonViewController * videoPopUpButtonViewController;                      //@synthesize videoPopUpButtonViewController=_videoPopUpButtonViewController - In the implementation block
@property (retain) SOAVPopUpButtonViewController * screenSharingPopUpButtonViewController;              //@synthesize screenSharingPopUpButtonViewController=_screenSharingPopUpButtonViewController - In the implementation block
@property (retain) NSArray * stackedLabelsConstraints;                                                  //@synthesize stackedLabelsConstraints=_stackedLabelsConstraints - In the implementation block
@property (assign) char showsLocationLabel; 
+(Class)avPopUpButtonViewControllerClass;
+(id)_blueScreenSharingImage;
+(id)_blueVideoImage;
+(id)_blueAudioImage;
+(id)_whiteScreenSharingImage;
+(id)_whiteVideoImage;
+(id)_whiteAudioImage;
+(void)setAVPopUpButtonViewControllerClass:(Class)arg1 ;
-(void)removeParticipant:(id)arg1 ;
-(NSTextField *)locationLabel;
-(char)showsLocationLabel;
-(NSView *)labelContainer;
-(NSArray *)stackedLabelsConstraints;
-(NSLayoutConstraint *)participantNameLabelBottomConstraint;
-(void)setStackedLabelsConstraints:(NSArray *)arg1 ;
-(void)setShowsLocationLabel:(char)arg1 ;
-(void)_updateContactName;
-(void)_updateBuddyPicture;
-(void)updateLocation;
-(NSStackView *)horizontalLayoutStackView;
-(SOAVPopUpButtonViewController *)screenSharingPopUpButtonViewController;
-(void)setScreenSharingPopUpButtonViewController:(SOAVPopUpButtonViewController *)arg1 ;
-(SOAVPopUpButtonViewController *)videoPopUpButtonViewController;
-(void)setVideoPopUpButtonViewController:(SOAVPopUpButtonViewController *)arg1 ;
-(SOAVPopUpButtonViewController *)audioPopUpButtonViewController;
-(void)setAudioPopUpButtonViewController:(SOAVPopUpButtonViewController *)arg1 ;
-(void)_imHandleInfoDidChange:(id)arg1 ;
-(void)_imHandlePictureDidChange:(id)arg1 ;
-(void)_imFMFSessionLocationReceived:(id)arg1 ;
-(void)_imFMFSessionRelationshipStatusDidChange:(id)arg1 ;
-(void)setHorizontalLayoutStackView:(NSStackView *)arg1 ;
-(void)setLabelContainer:(NSView *)arg1 ;
-(void)setLocationLabel:(NSTextField *)arg1 ;
-(void)setParticipantNameLabelBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
-(void)setObjectValue:(id)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)awakeFromNib;
@end

