/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSDocumentControllerPersistentRestoration : NSObject {

	CFDictionaryRef autoIDToDocument;
	CFDictionaryRef autoIDToWaiters;

}
-(id)init;
-(void)dealloc;
-(char)waitForDocumentWithAutoID:(unsigned)arg1 thenDo:(/*^block*/id)arg2 ;
-(void)loadedDocument:(id)arg1 forAutoID:(unsigned)arg2 ;
-(void)windowsDidFinishRestoring;
@end

