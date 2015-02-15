/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NFOfflineActionManager : NSObject
+(void)executeOfflineActionsForAccount:(id)arg1 ;
+(char)_executeActionForAccount:(id)arg1 action:(id)arg2 outError:(long long*)arg3 ;
+(void)_recoverFromInvalidAction:(id)arg1 ;
+(void)_copyNoteToRecoveredItemsFolder:(id)arg1 ;
+(void)_copyFolderContentsToRecoveredItemsFolder:(id)arg1 ;
+(char)_executeInsertNoteAction:(id)arg1 forAccount:(id)arg2 outError:(long long*)arg3 ;
+(char)_executeUpdateNoteAction:(id)arg1 forAccount:(id)arg2 outError:(long long*)arg3 ;
+(char)_executeMoveNoteAction:(id)arg1 forAccount:(id)arg2 outError:(long long*)arg3 ;
+(char)_executeInsertFolderAction:(id)arg1 forAccount:(id)arg2 outError:(long long*)arg3 ;
+(char)_executeUpdateFolderAction:(id)arg1 forAccount:(id)arg2 outError:(long long*)arg3 ;
+(char)_executeMoveFolderAction:(id)arg1 forAccount:(id)arg2 outError:(long long*)arg3 ;
@end

