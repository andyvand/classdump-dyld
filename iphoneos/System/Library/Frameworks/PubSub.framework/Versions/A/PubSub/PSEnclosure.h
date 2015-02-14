/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PubSub.framework/Versions/A/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PubSub/PubSub-Structs.h>
@class PSEntry, NSURL, NSString, NSError;

@interface PSEnclosure : NSObject {

	id _internal;

}

@property (readonly) PSEntry * entry; 
@property (retain,readonly) NSURL * URL; 
@property (retain,readonly) NSString * MIMEType; 
@property (readonly) long long length; 
@property (readonly) int downloadState; 
@property (readonly) double downloadProgress; 
@property (readonly) NSError * downloadError; 
@property (readonly) NSString * downloadedPath; 
-(NSString *)MIMEType;
-(PSEntry *)entry;
-(id)_initWithCore:(EnclosureCore*)arg1 ;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 length:(long long)arg3 ;
-(EnclosureCore*)_enclosureCore;
-(id)initWithData:(id)arg1 MIMEType:(id)arg2 name:(id)arg3 extension:(id)arg4 ;
-(id)initWithPath:(id)arg1 MIMEType:(id)arg2 ;
-(char)download:(id*)arg1 ;
-(int)downloadState;
-(NSString *)downloadedPath;
-(void)deleteDownload;
-(NSError *)downloadError;
-(void)dealloc;
-(id)description;
-(NSURL *)URL;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)length;
-(double)downloadProgress;
-(void)cancelDownload;
-(void)_setClient:(id)arg1 ;
@end

