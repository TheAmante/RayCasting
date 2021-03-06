#ifndef _Geometry_Cornel_H
#define _Geometry_Cornel_H

namespace Geometry
{
	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// \class	Cornel
	///
	/// \brief	A Cornell box with different materials on its 6 faces.
	/// 		
	/// \author	F. Lamarche, Universit� de Rennes 1
	/// \date	04/12/2013
	////////////////////////////////////////////////////////////////////////////////////////////////////
	class Cornel : public Geometry
	{
	protected:
		///** \brief L'ensemble des faces constituant le cube */
		//Square * m_square[6] ;

	public:

		////////////////////////////////////////////////////////////////////////////////////////////////////
		/// \fn	Cornel::Cornel(Material * up, Material * down, Material * front, Material * back,
		/// 	Material * left, Material * right)
		///
		/// \brief	Constructeur d'une Cornel box.
		///
		/// \author	F. Lamarche, Universit� de Rennes 1
		/// \date	04/12/2013
		///
		/// \param [in,out]	up   	The up material.
		/// \param [in,out]	down 	The down material.
		/// \param [in,out]	front	The front material.
		/// \param [in,out]	back 	The back material.
		/// \param [in,out]	left 	The the left material.
		/// \param [in,out]	right	The the right material.
		////////////////////////////////////////////////////////////////////////////////////////////////////
		Cornel(Material * up, Material * down, Material * front, Material * back, Material * left, Material * right)
			: Geometry()
		{
			Square sq0(up) ;
			sq0.translate(Math::Vector3(0.0f,0.0f,0.5f)) ;
			merge(sq0) ;

			Square sq1(left) ;
			sq1.translate(Math::Vector3(0.0f,0.0f,0.5f)) ;
			sq1.rotate(Math::Quaternion(Math::Vector3(1.0f,0.0f,0.0f), (float)M_PI/2.0f)) ;
			merge(sq1) ;

			Square sq2(down) ;
			sq2.translate(Math::Vector3(0.0f,0.0f,0.5f)) ;
			sq2.rotate(Math::Quaternion(Math::Vector3(1.0f,0.0f,0.0f), (float)M_PI)) ;
			merge(sq2) ;

			Square sq3(right) ;
			sq3.translate(Math::Vector3(0.0f,0.0f,0.5f)) ;
			sq3.rotate(Math::Quaternion(Math::Vector3(1.0f,0.0f,0.0f), (float)-M_PI/2.0f)) ;
			merge(sq3) ;

			Square sq4(front) ;
			sq4.translate(Math::Vector3(0.0,0.0,0.5)) ;
			sq4.rotate(Math::Quaternion(Math::Vector3(0.0f,1.0f,0.0f), (float)M_PI/2.0f)) ;
			merge(sq4) ;

			Square sq5(back) ;
			sq5.translate(Math::Vector3(0.0f,0.0f,0.5f)) ;
			sq5.rotate(Math::Quaternion(Math::Vector3(0.0f,1.0f,0.0f), (float)-M_PI/2.0f)) ;
			merge(sq5) ;

			//// D�claration des carr�s constituant les faces
			//m_square[0] = new Square(up) ;
			//m_square[0]->translate(Math::Vector3(0.0,0.0,0.5)) ;
			//m_square[1] = new Square(left) ;
			//m_square[1]->translate(Math::Vector3(0.0,0.0,0.5)) ;
			//m_square[1]->rotate(Math::Quaternion(Math::Vector3(1.0,0.0,0.0), (float)M_PI/2.0f)) ;
			//m_square[2] = new Square(down) ;
			//m_square[2]->translate(Math::Vector3(0.0,0.0,0.5)) ;
			//m_square[2]->rotate(Math::Quaternion(Math::Vector3(1.0,0.0,0.0), (float)M_PI)) ;
			//m_square[3] = new Square(right) ;
			//m_square[3]->translate(Math::Vector3(0.0,0.0,0.5)) ;
			//m_square[3]->rotate(Math::Quaternion(Math::Vector3(1.0,0.0,0.0), (float)-M_PI/2.0f)) ;
			//m_square[4] = new Square(front) ;
			//m_square[4]->translate(Math::Vector3(0.0,0.0,0.5)) ;
			//m_square[4]->rotate(Math::Quaternion(Math::Vector3(0.0,1.0,0.0), (float)M_PI/2.0f)) ;
			//m_square[5] = new Square(back) ;
			//m_square[5]->translate(Math::Vector3(0.0,0.0,0.5)) ;
			//m_square[5]->rotate(Math::Quaternion(Math::Vector3(0.0,1.0,0.0), (float)-M_PI/2.0f)) ;
			//// Ajout des g�om�tries dans cette g�om�trie
			//merge(m_square[0]) ;
			//merge(m_square[1]) ;
			//merge(m_square[2]) ;
			//merge(m_square[3]) ;
			//merge(m_square[4]) ;
			//merge(m_square[5]) ;
		}

	} ;
}


#endif