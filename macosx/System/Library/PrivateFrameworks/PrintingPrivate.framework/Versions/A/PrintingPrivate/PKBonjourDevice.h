/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PrintingPrivate.framework/Versions/A/PrintingPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrintingPrivate/PKMFPNode.h>

@class NSCountedSet, NSMutableArray;

@interface PKBonjourDevice : PKMFPNode {

	NSCountedSet* registerationTypes;
	NSMutableArray* txtRecords;

}

@property (retain) NSCountedSet * registerationTypes; 
@property (retain) NSMutableArray * txtRecords; 
@property (readonly) char secure; 
@property (readonly) char shared; 
@property (readonly) char local; 
@property (readonly) char fax; 
+(id)bonjourDeviceNamed:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(char)shared;
-(char)existsAsQueue:(id)arg1 ;
-(char)sameDevice:(id)arg1 ;
-(id)matchingScannerKey;
-(char)local;
-(unsigned long long)deviceAppearedAs:(id)arg1 domain:(id)arg2 ;
-(unsigned long long)deviceDisappearedAs:(id)arg1 domain:(id)arg2 ;
-(id)drivers;
-(id)driverInfoFor:(id)arg1 ;
-(void)setRegisterationTypes:(NSCountedSet *)arg1 ;
-(void)setTxtRecords:(NSMutableArray *)arg1 ;
-(NSCountedSet *)registerationTypes;
-(id)initBonjourDeviceNamed:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(NSMutableArray *)txtRecords;
-(char)secure;
-(id)URIForRecord:(id)arg1 ;
-(id)URI;
-(char)fax;
-(void)dealloc;
-(id)deviceID;
-(unsigned long long)attributes;
-(unsigned long long)kind;
@end

