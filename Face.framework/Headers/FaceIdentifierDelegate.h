//
//  FaceIdentifierDelegate.h
//  Face
//
//  Created by MCOMM00008 on 10/03/22.
//
#import "FaceResultModel.h"

#ifndef FaceIdentifierDelegate_h
#define FaceIdentifierDelegate_h

@protocol FaceIdentifierDelegate <NSObject>

- (void) faceIdentifierResult:(FaceResultModel*)result;

@end


#endif /* FaceIdentifierDelegate_h */
