/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:43 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@interface CNDDScanner : NSObject {

	dispatch_queue_sRef _analysisQueue;
	DDScannerRef _scanner;

}
-(id)initWithQueueLabel:(const char*)arg1 ;
-(id)scanString:(id)arg1 forResultsOfType:(id)arg2 ;
-(void)dealloc;
@end

