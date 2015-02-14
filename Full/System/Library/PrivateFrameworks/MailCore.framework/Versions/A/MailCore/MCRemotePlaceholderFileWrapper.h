/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailCore/MCPlaceholderFileWrapper.h>

@class NSURL;

@interface MCRemotePlaceholderFileWrapper : MCPlaceholderFileWrapper {

	NSURL* _URL;

}

@property (nonatomic,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(char)isRemotelyAccessed;
-(id)remoteAccessMimeType;
-(id)symbolicLinkDestinationURL;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)initDirectoryWithFileWrappers:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initRegularFileWithContents:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initSymbolicLinkWithDestinationURL:(id)arg1 ;
-(unsigned long long)approximateSize;
@end

