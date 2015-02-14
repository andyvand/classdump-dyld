/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/FaceTime.app/Contents/MacOS/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableRowView.h>

@protocol PersonTableRowViewDelegate;
@class NSView, NSImageView, NSButton, NSTextField, VibrantBox, NSLayoutConstraint, FTContactRowItem, FTHighlightView, NSImage;

@interface PersonTableRowView : NSTableRowView {

	char _isLastRow;
	id<PersonTableRowViewDelegate> _delegate;
	NSView* _containerView;
	NSImageView* _imageView;
	NSImageView* _faceTimeIconImageView;
	NSButton* _audioButton;
	NSButton* _videoButton;
	NSButton* _infoButton;
	NSTextField* _label;
	NSTextField* _dateLabel;
	VibrantBox* _bottomLine;
	NSLayoutConstraint* _dateLabelLeadingConstraint;
	FTContactRowItem* _contactRowItem;
	FTHighlightView* _highlightView;
	NSImage* _lightIconImage;
	NSImage* _darkIconImage;

}

@property (assign,nonatomic,__weak) id<PersonTableRowViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char isLastRow;                                                      //@synthesize isLastRow=_isLastRow - In the implementation block
@property (assign,nonatomic,__weak) NSView * containerView;                                       //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) NSImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) NSImageView * faceTimeIconImageView;                          //@synthesize faceTimeIconImageView=_faceTimeIconImageView - In the implementation block
@property (assign,nonatomic,__weak) NSButton * audioButton;                                       //@synthesize audioButton=_audioButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * videoButton;                                       //@synthesize videoButton=_videoButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * infoButton;                                        //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * label;                                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * dateLabel;                                      //@synthesize dateLabel=_dateLabel - In the implementation block
@property (assign,nonatomic,__weak) VibrantBox * bottomLine;                                      //@synthesize bottomLine=_bottomLine - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * dateLabelLeadingConstraint;              //@synthesize dateLabelLeadingConstraint=_dateLabelLeadingConstraint - In the implementation block
@property (nonatomic,retain) FTContactRowItem * contactRowItem;                                   //@synthesize contactRowItem=_contactRowItem - In the implementation block
@property (nonatomic,retain) FTHighlightView * highlightView;                                     //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) NSImage * lightIconImage;                                            //@synthesize lightIconImage=_lightIconImage - In the implementation block
@property (nonatomic,retain) NSImage * darkIconImage;                                             //@synthesize darkIconImage=_darkIconImage - In the implementation block
+(id)darkButtonPressColor;
+(id)lightVideoFaceTimeIcon;
+(id)darkVideoFaceTimeIcon;
+(id)lightAudioFaceTimeIcon;
+(id)darkAudioFaceTimeIcon;
+(id)darkAudioImage;
+(id)darkAlternateAudioImage;
+(id)darkVideoImage;
+(id)darkAlternateVideoImage;
+(id)darkInfoImage;
+(id)darkAlternateInfoImage;
+(id)lightAudioImage;
+(id)lightVideoImage;
+(id)lightInfoImage;
-(void)hideCallButtons:(char)arg1 ;
-(void)disableCallButtons;
-(void)showVideoButtonAnimated:(char)arg1 ;
-(void)enableVideoButton:(char)arg1 ;
-(void)showAudioButtonAnimated:(char)arg1 ;
-(void)enableAudioButton:(char)arg1 ;
-(void)setIsLastRow:(char)arg1 ;
-(void)setRowItem:(id)arg1 ;
-(void)setSelectedUI:(char)arg1 ;
-(void)setName:(id)arg1 wasMissed:(char)arg2 ;
-(NSTextField *)dateLabel;
-(char)isRecentsRow;
-(void)setFaceTimeIconHidden:(char)arg1 ;
-(char)isLastRow;
-(NSButton *)audioButton;
-(NSButton *)videoButton;
-(FTContactRowItem *)contactRowItem;
-(void)faceTimeAudioActionSelected:(id)arg1 ;
-(void)telephonyActionSelected:(id)arg1 ;
-(void)videoButton:(id)arg1 ;
-(void)audioButton:(id)arg1 ;
-(void)infoButton:(id)arg1 ;
-(NSImageView *)faceTimeIconImageView;
-(void)setFaceTimeIconImageView:(NSImageView *)arg1 ;
-(void)setAudioButton:(NSButton *)arg1 ;
-(void)setVideoButton:(NSButton *)arg1 ;
-(void)setInfoButton:(NSButton *)arg1 ;
-(void)setDateLabel:(NSTextField *)arg1 ;
-(VibrantBox *)bottomLine;
-(void)setBottomLine:(VibrantBox *)arg1 ;
-(NSLayoutConstraint *)dateLabelLeadingConstraint;
-(void)setDateLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContactRowItem:(FTContactRowItem *)arg1 ;
-(void)setHighlightView:(FTHighlightView *)arg1 ;
-(NSImage *)lightIconImage;
-(void)setLightIconImage:(NSImage *)arg1 ;
-(NSImage *)darkIconImage;
-(void)setDarkIconImage:(NSImage *)arg1 ;
-(NSButton *)infoButton;
-(void)setDelegate:(id<PersonTableRowViewDelegate>)arg1 ;
-(void)setImage:(id)arg1 ;
-(id<PersonTableRowViewDelegate>)delegate;
-(NSView *)containerView;
-(void)setContainerView:(NSView *)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)setLabel:(NSTextField *)arg1 ;
-(void)awakeFromNib;
-(NSTextField *)label;
-(void)setSelected:(char)arg1 ;
-(void)setImageView:(NSImageView *)arg1 ;
-(NSImageView *)imageView;
-(void)setNextRowSelected:(char)arg1 ;
-(FTHighlightView *)highlightView;
@end

