/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:57 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCopying.h>
#import <Foundation/NSSecureCoding.h>

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long* _indexes;
	unsigned long long _length;
	void* _reserved;

}

@property (nonatomic,readonly) long long _mapkit_section; 
@property (nonatomic,readonly) long long _mapkit_row; 
@property (nonatomic,readonly) long long tk_section; 
@property (nonatomic,readonly) long long tk_row; 
@property (readonly) unsigned long long length; 
+(id)cascade_rootPath;
+(id)_mapkit_indexPathForRow:(long long)arg1 inSection:(long long)arg2 ;
+(id)tk_indexPathForRow:(long long)arg1 inSection:(long long)arg2 ;
+(id)parentIndexPathForIndexPaths:(id)arg1 ;
+(void)initialize;
+(char)supportsSecureCoding;
+(id)indexPathWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2 ;
+(id)indexPath;
+(id)indexPathWithIndex:(unsigned long long)arg1 ;
-(char)cascade_isRootPath;
-(char)cascade_isRowPath;
-(char)cascade_isSectionPath;
-(id)cascade_pathByAppendingSection:(unsigned long long)arg1 ;
-(id)cascade_pathByAppendingRow:(unsigned long long)arg1 ;
-(unsigned long long)cascade_section;
-(unsigned long long)cascade_row;
-(id)cascade_parentRowPath;
-(id)cascade_parentSectionPath;
-(id)cascade_pathByAppendingSection:(unsigned long long)arg1 row:(unsigned long long)arg2 ;
-(id)cascade_pathByReplacingIndexAtPosition:(unsigned long long)arg1 withIndex:(unsigned long long)arg2 ;
-(char)cascade_isExtensionOfPath:(id)arg1 ;
-(long long)_mapkit_row;
-(long long)_mapkit_section;
-(long long)tk_section;
-(long long)tk_row;
-(char)descendsFrom:(id)arg1 ;
-(id)_safeIndexPathByRemovingLastIndex;
-(void)getIndexes:(unsigned long long*)arg1 range:(NSRange)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(unsigned long long)indexAtPosition:(unsigned long long)arg1 ;
-(id)indexPathByAddingIndex:(unsigned long long)arg1 ;
-(void)getIndexes:(unsigned long long*)arg1 ;
-(id)indexPathByRemovingLastIndex;
-(id)initWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithIndex:(unsigned long long)arg1 ;
@end

