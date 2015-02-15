/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/PrintAndScan.prefPane/Contents/MacOS/PrintAndScan
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrintAndScan/PrintAndScan-Structs.h>
#import <PrintAndScan/NSCopying.h>

@class NSString, NSMutableArray, PFGroupRow, NSArray;

@interface PFPrinterGroup : NSObject <NSCopying> {

	NSString* _title;
	NSMutableArray* _printers;
	PFGroupRow* _rowView;

}

@property (readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (readonly) NSArray * printers;                //@synthesize printers=_printers - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) PFGroupRow * rowView; 
-(id)printerAtIndex:(unsigned long long)arg1 ;
-(void)addPrinter:(id)arg1 ;
-(NSArray *)printers;
-(void)removeAllPrinters;
-(void)removePrinter:(id)arg1 ;
-(void)sortByName;
-(void)dealloc;
-(unsigned long long)count;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 ;
-(PFGroupRow *)rowView;
@end
