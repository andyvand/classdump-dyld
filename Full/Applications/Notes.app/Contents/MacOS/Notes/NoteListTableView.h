/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:43:42 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Notes.app/Contents/MacOS/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <AppKit/NSTableView.h>

@class NoteListArrayController;

@interface NoteListTableView : NSTableView {

	NoteListArrayController* _arrayController;

}

@property (assign,nonatomic,__weak) NoteListArrayController * arrayController;              //@synthesize arrayController=_arrayController - In the implementation block
-(void)setArrayController:(NoteListArrayController *)arg1 ;
-(void)scrollRowToVisible:(long long)arg1 animate:(char)arg2 ;
-(void)_noteListTableViewCommonInit;
-(NoteListArrayController *)arrayController;
-(void)_selectRowForEvent:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(void)keyDown:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(CGPoint*)arg4 ;
@end
