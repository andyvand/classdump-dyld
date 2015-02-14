/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Contacts.app/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/ABImportPanelController.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface ABLDIFController : ABImportPanelController {

	unsigned long long _readCounter;
	NSMutableArray* _data;
	NSMutableDictionary* _personAttributes;
	NSString* _Netscape_Person_Type;
	NSString* _separator;

}
+(id)ldifController;
-(char)importFile:(id)arg1 ;
-(void)importFinished;
-(void)_makePersonAttributes;
-(char)_shouldUnfoldAttributes:(id)arg1 ;
-(id)_unfoldAttributes:(id)arg1 ;
-(id)_getObjectClass:(id)arg1 ;
-(id)_readBlock:(id)arg1 ;
-(void)_processAndExportBlock:(id)arg1 ;
-(void)_fetchNextChunk;
-(char)_caseInsensitiveString:(id)arg1 isInArray:(id)arg2 ;
-(void)importLDIFDocument;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

