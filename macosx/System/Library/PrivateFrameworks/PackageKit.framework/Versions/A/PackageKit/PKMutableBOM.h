/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/PKBOM.h>

@interface PKMutableBOM : PKBOM
-(CFArrayRef)_newBOMPatternList:(id)arg1 ;
-(char)_addAppleDoubleAsNeededForForDirectory:(id)arg1 includeACLs:(char)arg2 ;
-(char)addBomPath:(id)arg1 fileType:(id)arg2 ;
-(char)_needAppleDoubleForPath:(id)arg1 includeACLs:(char)arg2 ;
-(char)_addAppleDoubleForFile:(id)arg1 forBOMPath:(id)arg2 ;
-(id)initForWritingToPath:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 writingToPath:(id)arg2 includeACLs:(char)arg3 maskPatterns:(id)arg4 ;
-(char)addFile:(id)arg1 forBomPath:(id)arg2 includeACLs:(char)arg3 ;
-(char)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 ;
-(char)commitData;
@end

