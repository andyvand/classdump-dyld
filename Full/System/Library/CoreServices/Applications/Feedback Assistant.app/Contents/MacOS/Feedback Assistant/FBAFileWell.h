/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant/Feedback Assistant-Structs.h>
#import <AppKit/NSView.h>

@protocol FBAFileWellDelegate;
@class FBAFileRequirement, NSURL, NSButton, NSTextField, NSImageView, NSView;

@interface FBAFileWell : NSView {

	char _highlightingForDrag;
	FBAFileRequirement* _requirement;
	NSURL* _fileURL;
	id<FBAFileWellDelegate> _delegate;
	NSButton* _revealButton;
	NSButton* _clearButton;
	NSTextField* _textField;
	NSImageView* _imageView;
	NSView* _contentView;

}

@property (retain) FBAFileRequirement * requirement;                            //@synthesize requirement=_requirement - In the implementation block
@property (retain) NSURL * fileURL;                                             //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSURL * valueURL; 
@property (retain) id<FBAFileWellDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (__weak) NSButton * revealButton;                                     //@synthesize revealButton=_revealButton - In the implementation block
@property (__weak) NSButton * clearButton;                                      //@synthesize clearButton=_clearButton - In the implementation block
@property (__weak) NSTextField * textField;                                     //@synthesize textField=_textField - In the implementation block
@property (__weak) NSImageView * imageView;                                     //@synthesize imageView=_imageView - In the implementation block
@property (retain) NSView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (getter=isHighlightingForDrag) char highlightingForDrag;              //@synthesize highlightingForDrag=_highlightingForDrag - In the implementation block
+(id)keyPathsForValuesAffectingValueURL;
-(id)filteredURLs:(id)arg1 ;
-(void)commonFileWellInit;
-(NSButton *)clearButton;
-(char)isHighlightingForDrag;
-(void)pushValueURLToBoundController;
-(void)setHighlightingForDrag:(char)arg1 ;
-(void)setClearButton:(NSButton *)arg1 ;
-(void)reveal:(id)arg1 ;
-(NSButton *)revealButton;
-(void)setRevealButton:(NSButton *)arg1 ;
-(void)updateLabels;
-(void)setValueURL:(NSURL *)arg1 ;
-(NSURL *)valueURL;
-(void)setDelegate:(id<FBAFileWellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(NSView *)contentView;
-(id<FBAFileWellDelegate>)delegate;
-(void)setContentView:(NSView *)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)clear:(id)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSURL *)fileURL;
-(NSTextField *)textField;
-(void)setImageView:(NSImageView *)arg1 ;
-(void)setTextField:(NSTextField *)arg1 ;
-(NSImageView *)imageView;
-(void)setRequirement:(FBAFileRequirement *)arg1 ;
-(FBAFileRequirement *)requirement;
@end

