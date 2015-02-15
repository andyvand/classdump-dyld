/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NFLocalToRemotePusherProtocol <NSObject>
@required
-(char)addNoteToRemote:(id)arg1 inFolder:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char*)arg4;
-(char)deleteNoteFromRemoteWithID:(id)arg1 fromFolder:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char*)arg4;
-(char)updateNoteOnRemote:(id)arg1 inFolder:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char*)arg4;
-(char)moveNoteOnRemote:(id)arg1 toFolder:(id)arg2 originalFolder:(id)arg3 accountProxy:(id)arg4 errorIsFatal:(char*)arg5;
-(char)addFolderToRemote:(id)arg1 inParent:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char*)arg4;
-(char)updateFolderOnRemote:(id)arg1 inParent:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char*)arg4;
-(char)moveFolderOnRemote:(id)arg1 toParent:(id)arg2 originalParent:(id)arg3 accountProxy:(id)arg4 errorIsFatal:(char*)arg5;
-(char)deleteFolderFromRemote:(id)arg1 fromParent:(id)arg2 accountProxy:(id)arg3 errorIsFatal:(char*)arg4;

@end

