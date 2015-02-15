/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:43:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Notes.app/Contents/MacOS/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <AppKit/NSTableRowView.h>
#import <Notes/NSAnimationDelegate.h>

@class NSString;

@interface NotesTableRowView : NSTableRowView <NSAnimationDelegate> {

	long long _rowNumber;

}

@property (assign,nonatomic) long long rowNumber;                   //@synthesize rowNumber=_rowNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRowNumber:(long long)arg1 ;
-(void)_notesTableRowViewCommonInit;
-(id)_selectionHighlightColor:(char)arg1 ;
-(long long)rowNumber;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawBackgroundInRect:(CGRect)arg1 ;
-(void)drawSeparatorInRect:(CGRect)arg1 ;
-(void)setEmphasized:(char)arg1 ;
-(void)setNextRowSelected:(char)arg1 ;
-(void)drawSelectionInRect:(CGRect)arg1 ;
@end
