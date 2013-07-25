//
//  NSString+VVSyntax.h
//  CommentTest
//
//  Created by 王 巍 on 13-7-18.
//  Copyright (c) 2013年 OneV's Den. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (VVSyntax)
-(NSString *) stringByConvertingToUniform;

-(BOOL) isObjCMethod;
-(BOOL) isProperty;
-(BOOL) isCFunction;
-(BOOL) isMacro;
-(BOOL) isEnum;
-(BOOL) isStruct;
-(BOOL) isUnion;
-(BOOL) isComplieKeyword;

/**
 *  Creates a fillup identation of max 8 spaces instead of tabs
 *
 *  @param     indentUpTo8        the length of the string before the identation
 *
 *  @return    a string containing spaces
 */
+ (NSString*)stringToFillIndent:(NSUInteger)indentUpTo8;

@end