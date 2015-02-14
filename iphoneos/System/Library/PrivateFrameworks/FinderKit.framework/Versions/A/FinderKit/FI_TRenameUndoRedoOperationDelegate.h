/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TRenameOperationDelegate.h>

@interface FI_TRenameUndoRedoOperationDelegate : FI_TRenameOperationDelegate {

	TRenameUndoRedoOperationHelper* _actionHelper;
	BOOL _needToReselectNode;
	int _renameOpCount;
	BOOL _isUndo;
	TriStateBool _pendingIsUndo;

}
-(int)asyncNodeOperation:(id)arg1 subOperationStarted:(unsigned)arg2 ;
-(int)asyncNodeOperation:(id)arg1 subOperationCompleted:(unsigned)arg2 targetNode:(const TFENode*)arg3 ;
-(void)setIsUndo:(BOOL)arg1 ;
-(int)configureNewName:(TString*)arg1 forNode:(const TFENode*)arg2 isDisplayName:(BOOL)arg3 allowInteraction:(BOOL)arg4 ;
-(id)initWithRenameAction:(TRenameAction*)arg1 ;
-(void)setNeedToReselectNode:(BOOL)arg1 ;
-(void)finalize;
-(void)dealloc;
@end

