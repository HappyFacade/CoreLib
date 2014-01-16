//
//  NSString+CoreCode.h
//  CoreLib
//
//  Created by CoreCode on 15.03.12.
/*	Copyright (c) 2012 - 2014 CoreCode
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitationthe rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


#include "CoreLib.h"

@interface NSString (CoreCode)

// filesystem support
@property (readonly, nonatomic) NSStringArray *dirContents;
@property (readonly, nonatomic) NSStringArray *dirContentsRecursive;
@property (readonly, nonatomic) NSString *uniqueFile;
@property (readonly, nonatomic) BOOL fileExists;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) BOOL isWriteablePath;

// NSUserDefaults support
@property (copy, nonatomic) id defaultObject;
@property (copy, nonatomic) NSString *defaultString;
@property (copy, nonatomic) NSArray *defaultArray;
@property (copy, nonatomic) NSDictionary *defaultDict;
@property (copy, nonatomic) NSURL *defaultURL;
@property (assign, nonatomic) NSInteger defaultInt;
@property (assign, nonatomic) float defaultFloat;

@property (readonly, nonatomic) NSString *localized;
//  bundle contents to path
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSURL *resourceURL;
// to url
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSURL *URL;
// url download
@property (readonly, nonatomic) NSData *download;
// file data
@property (readonly, nonatomic) NSData *contents;

@property (readonly, nonatomic) NSStringArray *lines;
@property (readonly, nonatomic) NSStringArray *words;
@property (readonly, nonatomic) NSString *trimmed;
@property (readonly, nonatomic) NSString *expanded;
@property (readonly, nonatomic) NSString *escaped;

@property (readonly, nonatomic) NSMutableString *mutableObject;
#ifdef USE_SECURITY
@property (readonly, nonatomic) NSString *SHA1;
#endif

@property (readonly, nonatomic) NSUInteger length;

@property (readonly, nonatomic) NSData *dataFromHexString;


- (NSString *)titlecaseString;
- (NSString *)propercaseString;


- (NSString *)stringValue;

- (NSUInteger)countOccurencesOfString:(NSString *)str;
- (BOOL)contains:(NSString *)otherString insensitive:(BOOL)insensitive;
- (BOOL)contains:(NSString *)otherString;
- (BOOL)containsAny:(NSArray *)otherStrings;
- (NSString *)stringByReplacingMultipleStrings:(NSDictionary *)replacements;
- (NSString *)clamp:(NSUInteger)maximumLength;
//- (NSString *)arg:(id)arg, ...;

// forwards for less typing
- (NSString *)replaced:(NSString *)str1 with:(NSString *)str2;	// stringByReplacingOccurencesOfString:withString:
- (NSStringArray *)split:(NSString *)sep;								// componentsSeparatedByString:

// properties for implemented methods
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) float floatValue;
@property (readonly, nonatomic) int intValue;
@property (readonly, nonatomic) NSInteger integerValue;
@property (readonly, nonatomic) long long longLongValue;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) NSNumber *numberValue;


@end


@interface NSMutableString (CoreCode)

@property (readonly, nonatomic) NSString *immutableObject;

@end

