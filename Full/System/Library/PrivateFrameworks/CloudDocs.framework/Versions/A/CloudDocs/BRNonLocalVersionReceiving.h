/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BRNonLocalVersionReceiving <NSObject>
@required
-(oneway void)newVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(char)arg5 lastEditorDeviceName:(id)arg6;
-(oneway void)versionsDone;
-(oneway void)newThumbnailForVersionWithEtag:(id)arg1;

@end

