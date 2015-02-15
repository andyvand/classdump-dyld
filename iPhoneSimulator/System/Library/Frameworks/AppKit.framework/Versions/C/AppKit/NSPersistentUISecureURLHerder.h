/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:32 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSMutableDictionary, NSString;

@interface NSPersistentUISecureURLHerder : NSObject {

	NSMutableDictionary* urlsStashedInLSToSharedFileListItemRefs;
	void* lsSharedFileList;
	NSString* bundleID;

}
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setLSPersistentFileList:(id)arg1 ;
-(OpaqueLSSharedFileListRefRef)getLSPersistentFileList;
-(void)fetchAndConsumeLSPersistentFileList;
-(void)resolveSecurityScopedURLsFromRecords:(id)arg1 ;
@end

