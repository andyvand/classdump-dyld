/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSFileManagerDelegate <NSObject>
@optional
-(char)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
-(char)fileManager:(id)arg1 shouldCopyItemAtURL:(id)arg2 toURL:(id)arg3;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtURL:(id)arg3 toURL:(id)arg4;
-(char)fileManager:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3;
-(char)fileManager:(id)arg1 shouldMoveItemAtURL:(id)arg2 toURL:(id)arg3;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtURL:(id)arg3 toURL:(id)arg4;
-(char)fileManager:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3;
-(char)fileManager:(id)arg1 shouldLinkItemAtURL:(id)arg2 toURL:(id)arg3;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtURL:(id)arg3 toURL:(id)arg4;
-(char)fileManager:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
-(char)fileManager:(id)arg1 shouldRemoveItemAtURL:(id)arg2;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
-(char)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;

@end

