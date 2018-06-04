//
//    Copyright (c) 2018 Shyam Bhat
//
//    Permission is hereby granted, free of charge, to any person obtaining a copy of
//    this software and associated documentation files (the "Software"), to deal in
//    the Software without restriction, including without limitation the rights to
//    use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//    the Software, and to permit persons to whom the Software is furnished to do so,
//    subject to the following conditions:
//
//    The above copyright notice and this permission notice shall be included in all
//    copies or substantial portions of the Software.
//
//    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//    FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//    COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//    IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//    CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>
#include <CoreGraphics/CoreGraphics.h>

#import "IKModel.h"

NS_ASSUME_NONNULL_BEGIN

@class IKUser;

@interface UserInPhoto : IKModel <NSCopying, NSSecureCoding, NSObject>

/**
 *  User in photo.
 */
@property (nonatomic, readonly) IKUser *user;

/**
 *  Position of a user in a photo defined by x and y coordinates.
 */
@property (nonatomic, readonly) CGPoint position;


/**
 *  Comparing UserInPhoto objects.
 *  @param userInPhoto      A UserInPhoto object.
 *  @return YES if Ids match. Else NO.
 */
- (BOOL)isEqualToUserInPhoto:(UserInPhoto *)userInPhoto;

@end

NS_ASSUME_NONNULL_END
