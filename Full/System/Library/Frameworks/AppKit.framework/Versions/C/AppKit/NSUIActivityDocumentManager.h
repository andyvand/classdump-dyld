/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSUIActivityDocumentManager : NSObject
+(id)sharedManager;
-(void)documentDidChangeFileURL:(id)arg1 ;
-(void)documentDidChangeFileType:(id)arg1 ;
-(void)documentDidOpen:(id)arg1 ;
-(void)documentDidClose:(id)arg1 ;
-(char)userActivityIsAutomaticForDocument:(id)arg1 ;
-(id)userActivityTypeForDocument:(id)arg1 ;
-(char)documentIsUbiquitous:(id)arg1 ;
-(void)updateAutomaticUserActivityForDocument:(id)arg1 ;
-(void)removeAutomaticUserActivityForDocument:(id)arg1 ;
@end
