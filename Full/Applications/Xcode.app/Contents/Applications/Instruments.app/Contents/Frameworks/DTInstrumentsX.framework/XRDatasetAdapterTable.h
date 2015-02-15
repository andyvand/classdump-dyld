/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Instruments.app/Contents/Frameworks/DTInstrumentsX.framework/DTInstrumentsX
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class XRDatasetAdapterCursor, NSString;

@interface XRDatasetAdapterTable : NSObject {

	XRDatasetAdapterCursor* _cursorPool;
	int _randomAccess;
	char _supportsTimeSorting;
	NSString* _nameInDatabase;

}

@property (retain) NSString * nameInDatabase;              //@synthesize nameInDatabase=_nameInDatabase - In the implementation block
@property (assign) char supportsTimeSorting;               //@synthesize supportsTimeSorting=_supportsTimeSorting - In the implementation block
-(void)setNameInDatabase:(NSString *)arg1 ;
-(id)checkOutCursor;
-(void)closeUnderlyingStorageWithMode:(int)arg1 ;
-(void)openUnderlyingStorageWithMode:(int)arg1 ;
-(void)closeCursor:(id)arg1 ;
-(void)checkInCursor:(id)arg1 ;
-(char)testForRandomAccess;
-(char)getColumnToEnclosureFieldMap:(const int*)arg1 count:(char*)arg2 ;
-(char)supportsTimeSorting;
-(NSString *)nameInDatabase;
-(void)setSupportsTimeSorting:(char)arg1 ;
@end
