/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PKExtendedAttributeEnumerator : NSObject {

	NSString* _path;
	char* _nameBuffer;
	long long _nameBufferSize;
	char* _currentName;
	long long _currentByteOffset;
	int _options;

}
-(id)_dataForAttributeName:(char*)arg1 ;
-(id)initWithFileAtPath:(id)arg1 options:(int)arg2 ;
-(id)nextAttribute;
-(void)rewindToBeginning;
-(void)dealloc;
@end

